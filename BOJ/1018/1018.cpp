#include <iostream>

using namespace std;

const int BoardSize = 8;
char checkboard[50][50] = {0};

int CalcSmallestColorNum(int row, int col)
{
    int smallestColorNum = 64;

    for (int k = 0; k < 2; k++)
    {
        int tmpResult = 0;

        for (int i = row; i < row + BoardSize; i++)
        {
            for (int j = col; j < col + BoardSize; j++)
            {
                if (k == 0)
                {
                    if ((i + j) % 2 == 0)
                    {
                        if (checkboard[i][j] != 'W')
                            tmpResult++;
                    }
                    else
                    {
                        if (checkboard[i][j] != 'B')
                            tmpResult++;
                    }
                }
                else
                {
                    if ((i + j) % 2 == 0)
                    {
                        if (checkboard[i][j] != 'B')
                            tmpResult++;
                    }
                    else
                    {
                        if (checkboard[i][j] != 'W')
                            tmpResult++;
                    }
                }
            }
        }

        if (tmpResult < smallestColorNum)
            smallestColorNum = tmpResult;
    }
    
    return smallestColorNum;
}

int main()
{
    int n, m, smallestcloringCnt = 64;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> checkboard[i][j];
    }

    for (int i = 0; i <= n - BoardSize; i++)
    {
        for (int j = 0; j <= m - BoardSize; j++)
        {
            int scn = CalcSmallestColorNum(i, j);

            if (smallestcloringCnt > scn)
                smallestcloringCnt = scn;
        }
    }

    cout << smallestcloringCnt;

	return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int confettiNum;
    int x, y, extent = 0;
    bool paper[100][100] = {0};

    cin >> confettiNum;

    for (int i = 0; i < confettiNum; i++)
    {
        cin >> x >> y;

        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if ((paper[x + j][y + k] == 0) && (x + j < 100) && (y + k < 100))
                {
                    paper[x + j][y + k] = 1;
                    extent++;
                }
            }
        }
    }

    cout << extent;

	return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int arr[100][100] = {0};  

    cin >> n >> m;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (i == 0)
                    cin >> arr[j][k];
                else
                {
                    int tmp = arr[j][k];
                    cin >> arr[j][k];
                    arr[j][k] += tmp;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
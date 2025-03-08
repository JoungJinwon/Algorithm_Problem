#include <iostream>

using namespace std;

int main()
{
    int n, m, cloestNum = 0;
    int card[100];

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> card[i];
    }

    for (int j = 0; j < n - 2; j++)
    {
        for (int k = j + 1; k < n - 1; k++)
        {
            for (int l = k + 1; l < n; l++)
            {
                int sum = card[j] + card[k] + card[l];

                if (sum > cloestNum && sum <= m)
                    cloestNum = sum;
            }
        }
    }

    cout << cloestNum;

    return 0;
}
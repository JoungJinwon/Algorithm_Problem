#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, maxNum = 0;
    int count[10001] = {0};

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;

        if (tmp > maxNum)
            maxNum = tmp;
        count[tmp]++;
    }

    for (int j = 1; j <= maxNum; j++)
    {
        for (int k = 0; k < count[j]; k++)
            cout << j << "\n";
    }
    cout.flush();

    return 0;
}
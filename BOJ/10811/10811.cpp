#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, i, j;
    vector<int> basket;

    cin >> n >> m;

    for (int k = 1; k <= n; k++)
    {
        basket.push_back(k);
    }

    for (int k = 0; k < m; k++)
    {
        cin >> i >> j;
        while (i < j)
        {
            swap(basket[i - 1], basket[j - 1]);
            i++, j--;
        }
    }

    for (int k = 0; k < n; k++)
    {
        cout << basket[k] << " ";
    }

    return 0;
}
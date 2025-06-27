#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, tmp;
    vector<int> card;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        card.push_back(tmp);
    }
    sort(card.begin(), card.end());

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int tmp;
        cin >> tmp;

        if (binary_search(card.begin(), card.end(), tmp))
            cout << "1 ";
        else
            cout << "0 ";
    }

    cout.flush();

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, result = 0;
    string str;
    vector<string> s;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        s.push_back(str);
    }
    sort(s.begin(), s.end());

    for (int j = 0; j < m; j++)
    {
        cin >> str;
        if (binary_search(s.begin(), s.end(), str))
            result++;
    }

    cout << result;
    cout.flush();

    return 0;
}
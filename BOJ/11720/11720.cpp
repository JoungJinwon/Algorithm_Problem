#include <iostream>

using namespace std;

int main()
{
    int n, total = 0;
    string s;

    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        int tmp = s[i] - '0';
        total += tmp;
    }

    cout << total;

    return 0;
}
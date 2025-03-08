#include <iostream>

using namespace std;

int main()
{
    int t;
    string s[10];

    cin >> t;

    for (int i = 0; i < t; i++)
        cin >> s[i];

    for (int i = 0; i < t; i++)
        cout << s[i][0] << s[i][s[i].length() - 1] << "\n";

    return 0;
}
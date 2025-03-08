#include <iostream>

using namespace std;

int main()
{
    string str, invStr;

    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--)
        invStr += str[i];

    if (invStr.compare(str) == 0)
        cout << 1;
    else
        cout << 0;


    return 0;
}
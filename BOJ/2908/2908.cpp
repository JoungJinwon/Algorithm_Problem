#include <iostream>

using namespace std;

int main()
{
    string a, b;
    string reversedA, reversedB;
    cin >> a >> b;

    for (int i = 2; i >= 0; i--)
    {
        if (a[i] > b[i])
        {
            cout << a[2] << a[1] << a[0] << "\n";
            break;
        }
        else if (a[i] < b[i])
        {
            cout << b[2] << b[1] << b[0] << "\n";
            break;
        }
        else
            continue;
    }

    return 0;
}
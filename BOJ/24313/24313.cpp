#include <iostream>

using namespace std;

int main()
{
    long long aOne, aZero;
    long long c, n;

    cin >> aOne >> aZero;
    cin >> c;
    cin >> n;

    if ((((c - aOne) * n) - aZero) >= 0 && c >= aOne)
        cout << 1;
    else
        cout << 0;

	return 0;
}
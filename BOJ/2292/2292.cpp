#include <iostream>

using namespace std;

int main()
{
    int input, n = 0;
    int tmp = 0;

    cin >> input;

    while (input > tmp)
    {
        tmp = 1 + 6 * (n * (n + 1) / 2);
        n++;
    }

    cout << n;

	return 0;
}
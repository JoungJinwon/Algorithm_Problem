#include <iostream>

using namespace std;

int main()
{
    int n, factor = 2;

    cin >> n;

    while (factor <= n)
    {
        if (n == 1)
            break;

        if (n % factor == 0)
        {
            n /= factor;
            cout << factor << "\n";
            continue;
        }
        else
            factor++;
    }

	return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int n, divisor = 0, totalPrime = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;

        if (tmp == 1)
            continue;

        for (int j = 2; j <= tmp; j++)
        {
            if (tmp % j == 0)
                divisor++;
        }

        if (divisor == 1)
            totalPrime++;

        divisor = 0;
    }

    cout << totalPrime;

	return 0;
}
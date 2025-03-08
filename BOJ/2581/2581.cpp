#include <iostream>

using namespace std;

int main()
{
    int m, n;
    int divisorNum = 0, minPrime = 0, primeSum = 0;

    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        if (i == 1)
            continue;

        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
                divisorNum++;

            if (divisorNum > 1) // ¾îÂ÷ÇÇ ¼Ò¼ö°¡ ¾Æ´Ô
                break;
        }

        if (divisorNum == 1)
        {
            if (minPrime == 0)
                minPrime = i;

            primeSum += i;
        }

        divisorNum = 0;
    }

    if (primeSum != 0)
        cout << primeSum << "\n" << minPrime;
    else
        cout << -1;

	return 0;
}
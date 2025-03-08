#include <iostream>

using namespace std;

int main()
{
    int n, k, divisorNum = 0;

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            divisorNum++;

        if (divisorNum == k)
        {
            cout << i;
            return 0;
        }
    }

    if (divisorNum < k)
        cout << 0;

	return 0;
}
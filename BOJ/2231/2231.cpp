#include <iostream>
#include <cmath>

using namespace std;

int maxDigit = 6;

int GetSum(int n)
{
    int sum = n;

    for (int i = 1; i <= 6; i++)
    {
        if (n >= 10)
        {
            sum += n % 10;
            n /= 10;
        }
        else
        {
            sum += n;
            break;
        }
    }

    return sum;
}

int main()
{
    int m, n;
    cin >> n;

    for(int i = 1; i < n; i++)
    {
        if (n == GetSum(i))
        {
            cout << i;
            return 0;
        }
    }

    cout << 0;
	return 0;
}
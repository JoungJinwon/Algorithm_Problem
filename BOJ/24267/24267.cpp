#include <iostream>

using namespace std;

int main()
{
    long long n, result = 0;

    cin >> n;

    for (long long i = n - 2; i >= 1; i--)
        result += i * (i + 1) / 2;

    cout << result << "\n" << 3;

	return 0;
}
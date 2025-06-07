#include <iostream>

using namespace std;

long long factorial(long long a)
{
    if (a >= 1)
        a *= factorial(a - 1);
    else
        return 1;

    return a;
}

int main()
{
    int n;
    long long result = 1;

    cin >> n;

    result = factorial(n);

    cout << result;

    return 0;
}
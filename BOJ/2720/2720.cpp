#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int result = ceil(pow((pow(2, n) + 1), 2));
    cout << result;

	return 0;
}
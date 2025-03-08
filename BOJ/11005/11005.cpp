#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int input, notation;
    string result;

    cin >> input >> notation;

    while (input > 0)
    {
        int remainder = input % notation;

        if (remainder >= 0 && remainder <= 9)
            result += to_string(remainder);
        else
            result += remainder - 10 + 'A';

        input /= notation;
    }

    reverse(result.begin(), result.end());
    cout << result;

	return 0;
}
#include <iostream>

using namespace std;

int main()
{
    const int devider = 42;
    int result = 0;
    int i[10];
    int count[42] = {};

    for (int j = 0; j < 10; j++)
    {
        cin >> i[j];
        i[j] = i[j] % devider;
        count[i[j]]++;
    }

    for (int j = 0; j < 42; j++)
    {
        if (count[j] > 0)
            result++;
    }

    cout << result;

    return 0;
}
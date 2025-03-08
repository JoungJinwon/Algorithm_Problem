#include <iostream>

using namespace std;

int main()
{
    int input;
    int max = -1, maxI, maxJ;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> input;
            if (input > max)
            {
                max = input;
                maxI = i;
                maxJ = j;
            }
        }
    }

    cout << max << "\n" << maxI + 1 << " " << maxJ + 1;

    return 0;
}
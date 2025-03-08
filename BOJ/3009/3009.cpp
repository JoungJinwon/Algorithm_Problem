#include <iostream>

using namespace std;

int main()
{
    int x[3], y[3], newX = 0, newY = 0;

    for (int i = 0; i < 3; i++)
        cin >> x[i] >> y[i];

    if (x[0] == x[1])
        newX = x[2];
    else if (x[0] == x[2])
        newX = x[1];
    else
        newX = x[0];

    if (y[0] == y[1])
        newY = y[2];
    else if (y[0] == y[2])
        newY = y[1];
    else
        newY = y[0];

    cout << newX << " " << newY;

	return 0;
}
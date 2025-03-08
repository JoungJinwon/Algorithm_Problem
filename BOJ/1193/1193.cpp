#include <iostream>

using namespace std;

int main()
{
    int x, lineNum = 1;

    cin >> x;

    while (x - lineNum > 0)
    {
        x -= lineNum;
        lineNum++;
    }

    if (lineNum % 2 == 0)
        cout << x << "/" << lineNum + 1 - x;
    else
        cout << lineNum + 1 - x << "/" << x;

	return 0;
}
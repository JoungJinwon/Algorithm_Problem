#include <iostream>

using namespace std;

int main()
{
    int a, b, v, day;

    cin >> a >> b >> v;

    int vMinusA = v - a;
    int aMinusB = a - b;

    day = vMinusA / aMinusB;

    if (vMinusA % aMinusB == 0)
        day++;
    else
        day += 2;

    cout << day;

	return 0;
}
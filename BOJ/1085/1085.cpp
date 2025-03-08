#include <iostream>

using namespace std;

int main()
{
    int x, y, w, h;
    int shortestX, shortestY;

    cin >> x >> y >> w >> h;

    shortestX = (x > w - x) ? w - x : x;
    shortestY = (y > h - y) ? h - y : y;

    cout << ((shortestX < shortestY) ? shortestX : shortestY);

	return 0;
}
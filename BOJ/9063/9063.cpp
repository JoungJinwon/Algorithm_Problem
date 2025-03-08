#include <iostream>

using namespace std;

int main()
{
    int n, x, y, minX = 0, maxX = 0, minY = 0, maxY = 0;
    int extent;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        if (i == 0)
        {
            minX = x;
            maxX = x;
            minY = y;
            maxY = y;
        }
        else
        {
            if (x < minX)
                minX = x;
            else if (x > maxX)
                maxX = x;
            
            if (y < minY)
                minY = y;
            else if (y > maxY)
                maxY = y;
        }
    }

    extent = (maxX - minX) * (maxY - minY);
    cout << extent;

    return 0;
}
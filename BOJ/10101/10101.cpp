#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if ((a + b + c) != 180)
        cout << "Error";
    else
    {
        if (a == b)
        {
            if (b == c)
                cout << "Equilateral";
            else
                cout << "Isosceles"; // a == b != c
        }
        else
        {
            if (a == c)
                cout << "Isosceles"; // a = c != b
            else
            {
                if (b == c)
                    cout << "Isosceles"; // b = c != a
                else
                    cout << "Scalene";
            }
        }
    }

	return 0;
}
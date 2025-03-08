#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0, divisorSum = 0;
    vector<int> divisors;

    while (true)
    {
        cin >> n;

        if (n == -1)
            break;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0 && n != i)
            {
                divisorSum += i;
                divisors.push_back(i);
            }
        }

        if (n == divisorSum)
        {
            cout << n << " = ";

            for (int j = 0; j < divisors.size(); j++)
            {
                if (j != divisors.size() - 1)
                    cout << divisors[j] << " + ";
                else
                    cout << divisors[j] << "\n";
            }
        }
        else
            cout << n << " is NOT perfect." << "\n";

        divisorSum = 0;
        divisors.clear();
    }

	return 0;
}
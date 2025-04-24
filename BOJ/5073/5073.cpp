#include <iostream>

using namespace std;

int main()
{
    bool maxFlag[3] = {false};
    int maxIdx = -1, maxValue = 0, sum = 0;
    int edge[3];

    while (true)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> edge[i];
            if (edge[i] > maxValue)
            {
                maxValue = edge[i];
                maxIdx = i;
            }
        }

        if (maxIdx == -1)
            return 0;

        maxFlag[maxIdx] = true;
        for (int i = 0; i < 3; i++)
        {
            if (maxFlag[i]) continue;
            sum += edge[i];
        }
                
        if (edge[maxIdx] >= sum)
            cout << "Invalid\n";
        else if (edge[0] == edge[1] && edge[1] == edge[2])
            cout << "Equilateral\n";
        else if (edge[0] == edge[1] || edge[1] == edge[2] || edge[0] == edge[2])
            cout << "Isosceles\n";
        else
            cout << "Scalene\n";

        maxFlag[maxIdx] = false;
        maxIdx = -1; maxValue = 0; sum = 0;
    }
	return 0;
}
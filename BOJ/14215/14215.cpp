#include <iostream>

using namespace std;

int main()
{
    int edge[3];
    int maxIdx = -1, maxValue = 0, sum = 0, result;

    for (int i = 0; i < 3; i++)
    {
        cin >> edge[i];
        if (edge[i] > maxValue)
        {
            maxValue = edge[i];
            maxIdx = i;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (i == maxIdx) continue;
        sum += edge[i];
    }

    if (edge[0] == edge[1] && edge[1] == edge[2])
        result = edge[0] * 3;
    else
    {
        if (sum * 2 - 1 > sum + maxValue)
            result = sum + maxValue;
        else
            result = sum * 2 - 1;
    }

    cout << result;
	return 0;
}
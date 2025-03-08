#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, maxPoint = 0;
    float sum = 0, newAverage;
    vector<float> points;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int point;
        cin >> point;
        
        if (point > maxPoint)
            maxPoint = point;

        points.push_back(point);
    }
        
    for (int i = 0; i < n; i++)
    {
        points[i] = (points[i] / maxPoint) * 100;
        sum += points[i];
    }

    newAverage = sum / (float)n;
    cout << newAverage;

    return 0;
}
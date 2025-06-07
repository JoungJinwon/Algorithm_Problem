#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> coordinate;

bool compare(coordinate a, coordinate b)
{
    if (a.second != b.second)
        return a.second < b.second;
    else
        return a.first < b.first;
}

int main()
{
    int n;
    vector<coordinate> pointVector;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        pointVector.push_back(make_pair(x, y));
    }

    sort(pointVector.begin(), pointVector.end(), compare);
    
    for (const coordinate& c : pointVector)
        cout << c.first << ' ' << c.second << '\n';

	return 0;
}
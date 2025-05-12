#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> coordinate;
vector<coordinate> coordVector;

int main()
{
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        coordVector.push_back(make_pair(x, y));
    }

    sort(coordVector.begin(), coordVector.end());

    for (auto p: coordVector)
        cout << p.first << " " << p.second << "\n";

	return 0;
}
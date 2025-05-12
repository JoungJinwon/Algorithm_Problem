#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> v;
    cin >> n;

    while (n >= 10)
    {
        int tmp = n % 10;
        v.emplace_back(tmp);
        n /= 10;
    }
    v.emplace_back(n);

    sort(v.begin(), v.end(), greater<int>());

    for (int i: v)
        cout << i;
    
	return 0;
}
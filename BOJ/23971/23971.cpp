#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int h, w, n, m, row, col, result;

    cin >> h >> w >> n >> m;

    row = h / (n + 1);
    col = w / (m + 1);

    if (h % (n + 1) != 0)
        row++;
    if (w % (m + 1) != 0)
        col++;
    
    result = row * col;

    cout << result;
    return 0;
}
#include <iostream>

# define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )
# define MAX_SIZE 5

using namespace std;

// 선택 정렬
void selectionSort(int list[], int n)
{
    int i, j, least, tmp;

    // 정렬은 (n-1)번 수행
    for(i = 0; i < n - 1; i++)
    {
        least = i;

        // (i + 1)부터 (n - 1)까지 이동하며 최솟값을 탐색
        for(j = i + 1; j < n; j++)
        {
            if(list[j] < list[least])
                least = j;
        }

        // 최솟값이 자기 자신이면 Swap을 하지 않는다.
        if(i != least)
            SWAP(list[i], list[least], tmp);
    }
}

int main()
{
    int n, k;
    int x[1000];

    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> x[i];

    selectionSort(x, n);

    cout << x[n - k];

    return 0;
}
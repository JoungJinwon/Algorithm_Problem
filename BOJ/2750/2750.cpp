#include <iostream>
#define MAX_SIZE 5

using namespace std;

void bubbleSort(int list[], int n)
{
    int i, j, tmp;

    for(i = n - 1; i > 0; i--) // 0부터 (i-1)까지 반복
    {
        for(j = 0; j < i; j++)
        {
            if(list[j] > list[j + 1]) // j번째와 j+1번째의 요소가 오름차순이 아니면 교환
            {
                tmp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    int n;
    int arr[1000];

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubbleSort(arr, n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << "\n";

    return 0;
}
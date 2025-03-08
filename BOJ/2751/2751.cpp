#include <iostream>
#include <vector>

using namespace std;

vector<int> sorted;

void merge(vector<int>& list, int left, int mid, int right)
{
    int i, j, k, l;
    i = left;
    j = mid + 1;
    k = left;

    /* 분할 정렬된 list의 합병 */
    while(i <= mid && j <= right)
    {
        if(list[i] <= list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }

    if(i > mid) // 오른쪽 배열에 남아있는 값들을 일괄 복사
    {
        for(l = j; l <= right; l++)
            sorted[k++] = list[l];
    }
    else // 왼쪽 배열에 남아있는 값들을 일괄 복사
    {
        for(l = i; l <= mid; l++)
            sorted[k++] = list[l];
    }

    for(l = left; l <= right; l++)
        list[l] = sorted[l];
}

// 합병 정렬
void merge_sort(vector<int>& list, int left, int right)
{
    int mid;

    if(left < right)
    {
        mid = (left + right) / 2;
        merge_sort(list, left, mid);
        merge_sort(list, mid + 1, right);
        merge(list, left, mid, right);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> x(n);
    sorted.resize(n);

    for (int i = 0; i < n; i++)
        cin >> x[i];

    merge_sort(x, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << x[i] << "\n";

    return 0;
}
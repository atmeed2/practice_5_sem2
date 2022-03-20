#include <bits/stdc++.h>
using namespace std;


int find_terms(int arr[], int res, int k)
{
    unordered_map<int, int> m;

    for (int i = 0; i < res; i++)
        m[arr[i]]++;

    int twice_count = 0;

    for (int i = 0; i < res; i++)
    {
        twice_count += m[k-arr[i]];

        if (k - arr[i] == arr[i])
            twice_count--;
    }

    return twice_count/2;
}

int main()
{int n;
    cout << "Размер массива:\n";
    cin >> n;

    int arr[n];
    cout << "Массив:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cout << "Сумма:\n";
    cin >> k;

    int res = sizeof(arr)/sizeof(arr[0]);
    cout << find_terms(arr, res, k);
    return 0;
}
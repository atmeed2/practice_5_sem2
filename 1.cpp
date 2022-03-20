#include <iostream>
#include <algorithm>

//Я ленивый :(
using namespace std;

int binary_search(int arr[], int left, int right, int key)
{
    int mid = 0;
    while (1)
    {
        mid = (left + right) / 2;

        if (key < arr[mid])
            right = mid - 1;
        else if (key > arr[mid])
            left = mid + 1;
        else
            return mid;

        if (left > right)
            return -1;
    }
}

int main() {

    int n;
    cout << "Размер массива:\n";
    cin >> n;

    int arr[n];
    cout << "Числа для заполнения массива:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key = 0;
    int index = 0;
    sort(arr, arr + n);
    cout << "Ключ:\n";
    cin >> key;

    index = binary_search(arr, 0, n, key);

    if (index >= 0)
        cout << "Элемент в ячейке с индексом: " << index;
    else
        cout << "Элемента не существует";

    return 0;
}
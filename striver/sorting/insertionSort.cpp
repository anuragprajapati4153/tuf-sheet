#include <iostream>
using namespace std;
void insertionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}
int main()
{
    int n;
    cout << "Enter your number of element: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);

    return 0;
}
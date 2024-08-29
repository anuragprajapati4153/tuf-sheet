#include <iostream>
using namespace std;
void selectionSort(int *arr, int n)
{
    int min, temp;
    for (int i = 0; i < n - 1; i++)
    {
        // find min element in rest of array
        min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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
    selectionSort(arr, n);

    return 0;
}
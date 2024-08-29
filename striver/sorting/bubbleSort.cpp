#include <iostream>
using namespace std;
void bubbleSort(int *arr, int n)
{
    int min, temp;
    for (int i = n - 1; i >= 0; i--)
    {
        // find max element and push back to the last
        int didSwap = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
            break;
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
    bubbleSort(arr, n);

    return 0;
}
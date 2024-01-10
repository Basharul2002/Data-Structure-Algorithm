#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int size)
{
    bool flag = false;
    for(int i = 1; i<size; i++)
    {
        for(int j =0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
    }
}


int main()
{
    int arr[] = {2, 5, 1, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
        cout<<arr[i] << " ";
      
    cout << endl;

    // Sort the array using bubble sort
    BubbleSort(arr, size);

    // Display the sorted array
    cout << "Array after Bubble Sort: ";
    for (int i = 0; i < size; i++)
        cout<<arr[i] << " ";
    
    cout<<endl;
    return 0;
}

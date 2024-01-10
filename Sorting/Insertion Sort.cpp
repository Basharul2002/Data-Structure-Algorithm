#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size)
{
    for(int i = 1; i<size; i++)
    {
        int key = arr[i];
        int j = 0;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}


nt main()
{
    int arr[] = {2, 5, 1, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
  
    cout << endl;

    // Sort the array using insertion sort
    insertionSort(arr, size);

    // Display the sorted array
    cout << "Array after Bubble Sort: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    
    cout << endl;

    return 0;
}

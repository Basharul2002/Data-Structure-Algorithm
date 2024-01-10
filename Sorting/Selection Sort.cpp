#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int size)
{
    for(int i =0; i<size-1; i++)
    {
        int mid_index = i;
        for(int j = i+1; j<size; j++)
        {
            if(arr[j]<arr[mid_index])
                mid_index = j;
            
        }

        if(mid_index != i)
            swap(arr[i], arr[mid_index]);
        
    }
}


int main(
{
    int originalArr[] = {2, 5, 1, 3, 4};

    // Sort the array using selection sort
    selectionSort(originalArr, size);

    // Display the sorted array
    cout << "Array after Selection Sort: ";
    for (int i = 0; i < size; i++)
        cout << originalArr[i] << " ";
    
    cout << endl;
    return 0;
}

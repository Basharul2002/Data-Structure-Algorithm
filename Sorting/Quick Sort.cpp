#include<bits/stdc++.h>
using namespace std;

void QuickSort(int arr[], int low, int high);
int Partition(int arr[], int low, int high);

int main()
{
    int arr[6] = {5, 3, 2, 4, 1, 6};
    QuickSort(arr, 0, 6);
    
    for(int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    return 0;
}

void QuickSort(int arr[], int low, int high)
{
    if (low >= high)
        return;
        
    int pivot_index = Partition(arr, low, high);
    QuickSort(arr, low, pivot_index - 1);
    QuickSort(arr, pivot_index + 1, high);
}

int Partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[i + 1], arr[high]);
    
    return i + 1;
}

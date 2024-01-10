#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[], int size, int lArr[], int lSize, int rArr[], int rSize);
void MergeSort(int arr[], int size);

int main()
{
    int arr[6] = {5, 3, 2, 4, 1, 6};
    MergeSort(arr, 6);
    
    for(int i = 0; i<6; i++)
        cout<<arr[i]<<" ";
    return 0;
}

void MergeSort(int arr[], int size)
{
    if(size < 2)
        return;

    int mid = size * 0.5;
    int lArr[mid], rArr[size - mid];

    for(int i = 0; i < mid; i++)
        lArr[i] = arr[i];

    for(int i = mid; i < size; i++)
        rArr[i - mid] = arr[i];

    MergeSort(lArr, mid);
    MergeSort(rArr, size - mid);
    Merge(arr, size, lArr, mid, rArr, size - mid);
}

void Merge(int arr[], int size, int lArr[], int lSize, int rArr[], int rSize)
{
    int i = 0, j = 0, k = 0;

    while(i < lSize && j < rSize)
    {
        if(lArr[i] <= rArr[j])
        {
            arr[k] = lArr[i];
            i++;
        }
        else
        {
            arr[k] = rArr[j];
            j++;
        }
        k++;
    }

    while(i < lSize)
    {
        arr[k] = lArr[i];
        i++;
        k++;
    }

    while(j < rSize)
    {
        arr[k] = rArr[j];
        j++;
        k++;
    }
}

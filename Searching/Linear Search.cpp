#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int searchElement)
{
    for(int i =0; i<size; i++)
    {
        if(arr[i] == searchElement)
            return i; 

        else
            return -1;
        
    }
}


int main()
{
    int arr[] = {2, 5, 1, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);


    // Perform linear search
    int searchElement = 3;
    int linearSearchResult = linearSearch(arr, size, searchElement);

    if (linearSearchResult != -1)
        cout << "Linear Search: Element " << searchElement << " found at index " << linearSearchResult << endl;
    
    else
        cout << "Linear Search: Element " << searchElement << " not found in the array." << endl;

    return 0;
}

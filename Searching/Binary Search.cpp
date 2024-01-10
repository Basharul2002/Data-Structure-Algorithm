#include <bits/stdc++.h>
using namespace std;

// Recursive
int binarySearch(int num[], int left, int right, int key) 
{
    if (left <= right) 
    {
        int mid = left + (right - left) / 2;
        // If data is found
        if (num[mid] == key)
            return mid;

        // If key is in the left subarray
        if (num[mid] > key)
            return binarySearch(num, left, mid - 1, key);

        // If key is in the right subarray
        return binarySearch(num, mid + 1, right, key);
    }

    // If data is not found
    return -1;
}






int main()
{
     int binarySearchResult = binarySearch(arr, 0, size - 1, searchElement);

    if (binarySearchResult != -1)
        cout << "Binary Search: Element " << searchElement << " found at index " << binarySearchResult << endl;
    
    else
        cout << "Binary Search: Element " << searchElement << " not found in the array." << endl;
    

    return 0;
}

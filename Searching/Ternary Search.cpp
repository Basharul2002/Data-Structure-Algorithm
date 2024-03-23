#include <iostream>
#include <vector>

using namespace std;

// Function to perform ternary search recursively
int ternarySearch(vector<int>& arr, int target, int left, int right) 
{
    if (left > right) 
        return -1; // Base case: Element not found
    

    // Calculate partition sizes
    int partitionSize = (right - left) / 3;
    int mid1 = left + partitionSize;
    int mid2 = right - partitionSize;

    // Check if target is equal to one of the midpoints
    if (arr[mid1] == target) 
        return mid1;
    
    else if (arr[mid2] == target) 
        return mid2;
    

    // Recursively search in each partition
    if (target < arr[mid1]) 
        return ternarySearch(arr, target, left, mid1 - 1);
        
    else if (target > arr[mid2]) 
        return ternarySearch(arr, target, mid2 + 1, right);
    
    else 
        return ternarySearch(arr, target, mid1 + 1, mid2 - 1);
    
}

int main() 
{
    vector<int> nums;
    int size, target;
    
    cout<<"Enter the size: ";
    cin>>size;
    
    cout<<"Enter your data: "
    for(int i =0; i<size; i++)
    {
        int n;
        cin>>n;
        nums.push_back(n);
    }
    
    cout<<"Search Data: ";
    cin>>target;
    
    int index = ternarySearch(nums, target, 0, size);

    if (index != -1) 
        cout<<"Element "<<target<<" found at index "<<index<<"\n";
    
    else 
        cout<<"Element "<<target<<" not found in the array."<<"\n";
    

    return 0;
}

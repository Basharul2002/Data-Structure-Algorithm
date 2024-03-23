#include<bits/stdc++.h>
using namespace std;

int search(const vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;

    // Fill the hash table with values and their indices
    for (int i = 0; i < nums.size(); i++) 
        numToIndex[nums[i]] = i;
    

    // Lookup the target value in the hash table
    auto it = numToIndex.find(target);
    if (it != numToIndex.end()) 
        return it->second;  // Return the index if found
    
    
    else 
        return -1;  // Return -1 if not found
    
}

int main() {
    vector<int> nums; // Example unsorted array
    int size, target; // Example target element to search for
    cout<<"Number of data: ";
    cin>>size;
    cout<<"Input data: ";
    for(int i=0; i<size; i++)
    {
        int n;
        cin>>n;
        
        nums.push_back(n);
    }
    
    cout<<"Searing Element: ";
    cin>>target;

    int index = search(nums, target);
    if (index != -1) 
        cout<<"Element "<<target<<" found at index "<<index<<"\n";
     
    else 
        cout<<"Element "<<target<<" not found in the array.\n";
    

    return 0;
}

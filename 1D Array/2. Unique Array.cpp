/*
Initialize an array. Size should be more than FIVE. Write you program to change the array in such a way so that there cannot be any duplicate element in the array anymore. Print the changed array. If the initialized array already had no duplicate elements from the beginning, output a message saying “Array already unique!”;

For example,
Scenario 1:
Array_1 = {1,4,6,3,6,9,1}

Output: 1 4 6 3 9

Scenario 2:
Array_1 = {1,4,5,3,6,9}

Output: Array already unique!
*/



#include<bits/stdc++.h>
using namespace std;

void arrayCheck(int arr[], int size);
void arrayDisplay(int array[], int size);

int main()
{
    int array[] = {1, 4, 6, 3, 6, 9, 1};
    int size = sizeof(array)/sizeof(array[0]);

    arrayDisplay(array, size);
    arrayCheck(array, size);

    return 0;
}


void arrayDisplay(int a[], int n)
{
    cout<<"Array: ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


void arrayCheck(int arr[], int size)
{
    int k =0;
    bool flag = false;
    for(int i=0; i<size; i++ )
    {
        for(int j=0; j<i; j++ )
        {
            if( arr[i] == arr[j] )
            {
                arr[i] = arr[i+1];
                flag = true;
                k++;
            }
        }
    }

    cout<<"Unique Array: ";
    for(int i=0; i<size+1-k; i++)
        cout<<arr[i]<<" ";
    

    if(flag == false)
        cout<<"Array already unique";

    return ;
}



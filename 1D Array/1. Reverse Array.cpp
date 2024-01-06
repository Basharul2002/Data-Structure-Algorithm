/*
Initialize TWO integer arrays of different sizes. Merge the input arrays and create a new array. Then print the new array in reverse order.

For example,
Array_1 = {10,20,30,40,50}
Array_2 = {1,2,3,4,5,6,7,8}

Output: 8 7 6 5 4 3 2 1 50 40 30 20 10
*/

#include<bits/stdc++.h>
using namespace std;


void arrayDisplay(int a[], int n);
void reverse(int arr[], int l);
void arrayMarge(int arr1[], int arr2[], int s1, int s2);

int marge[100];

int main()
{
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int s1=sizeof(arr1)/sizeof(arr1[0]);
    int s2= sizeof(arr2)/sizeof(arr2[0]);

    arrayDisplay(arr1, s1);
    arrayDisplay(arr2, s2);
    reverse(arr1, s1);
    reverse(arr2, s2);

    arrayMarge(arr1, arr2, s1, s2);
    return 0;
}


void arrayDisplay(int a[], int n)
{
    cout<<"Array: ";
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    
    cout<<endl;
}


void reverse(int arr[], int l)
{
    reverse(arr, arr+l);
}


void arrayMarge(int arr1[], int arr2[], int s1, int s2)
{
    for(int i=0; i<s2; i++)
        marge[i] = arr2[i];
    

    for(int i=s2, j=0; i<s1+s2, j<s2; i++, j++)
        marge[i] = arr1[j];
    

    cout<<"Reverse Marge Array: ";
    for(int i=0; i<s1+s2; i++)
        cout<<marge[i]<<" ";
    
}





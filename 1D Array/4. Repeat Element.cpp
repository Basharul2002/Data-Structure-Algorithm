/*
Initialize an integer array A of size 10. Take an integer as input and print how many times that integer occurs in A.

For example,
Array_1 = {8,4,6,1,6,9,6,1,9,8}

Output:
Input a number to search: 6
The number occurs 3 times in the array
*/



#include<bits/stdc++.h>
using namespace std;

void arrayDisplay(int a[], int n);
int frequencyCheck(int a[], int n, int x);

int main() {
    int a[] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    int n = sizeof(a)/sizeof(a[0]);
    arrayDisplay(a, n);


    int search;
    cout<<"Input a number to search: ";
    cin>>search;

    cout<<"The number occurs "<<frequencyCheck(a, n, search)<<" times in the array"<<endl<<endl;

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

int frequencyCheck(int a[], int n, int search)
{
    int flag = 0;
    for (int i=0; i<n; i++)
       if(a[i] == search)
       {
            flag++;
       }


    return flag;
}

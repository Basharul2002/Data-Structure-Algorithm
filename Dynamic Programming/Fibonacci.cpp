#include<bits/stdc++.h>
using namespace std;

int fibonacciRecursive(int n); // Recursive
int fibonacciDynamic(int n, int store[]); // DP


int main()
{
    int n;
    cout<<"Enter the number of Fibonacci series values: ";
    cin>>n;

    cout<<endl<<endl<<"***********************  Output  ***********************"<<endl;


    // Recursive
    cout<<"Fibonacci series [Recursion]: ";
    for(int i=0; i<n; ++i)
        cout<<fibonacciRecursive(i)<<" ";


    // DP
    int arr[n+1];

    for(int i=0; i<=n; ++i)
        arr[i] = -1;

    cout<<endl;
    cout<<"Fibonacci series using [DP]: ";
    for(int i=0; i<n; ++i)
        cout<<fibonacciDynamic(i, arr)<< " ";

    cout<<endl<<endl<<endl;


    return 0;

}


// Recursive
int fibonacciRecursive(int n)
{
    if(n <= 1)
        return n;

    return fibonacciRecursive(n-1) + fibonacciRecursive(n-2);
}


// DP
int fibonacciDynamic(int n, int arr[])
{
    if(n <= 1)
        return n;

    if(arr[n] != -1)
        return arr[n];

    return fibonacciDynamic(n-1, arr) + fibonacciDynamic(n-2, arr);
}

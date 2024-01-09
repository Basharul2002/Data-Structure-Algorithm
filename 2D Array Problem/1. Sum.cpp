/*
Find the summation of the elements of a 2D array. 
0 1 2 
12 5 8 
6 7 4 
18 9 2 
Input (Declarations and Initializations): int arr[3][3], int sum = 0; 
Process: 
1. Start from the row with row-value r=0. 
2. Start from the column with column-value c= 0. 
3. Add the value of sum with the element in arr[r][c] index. 
4. Store the summation of the add operation in (3) in sum. 
5. Increase the value of c by 1. 
6. Repeat (3), (4) and (5) for all the columns. 
7. Increase the value of r by 1. 
8. Repeat (2), (3), (4), (5), (6), (7) for all the rows. 
Output: Print the value of sum.
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int r, c, sum=0;
    cin>>r>>c;
    int a[100][100];

    // For store data in array
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
            cin>>a[i][j];
        
    }

    // For sum array data
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
            sum = sum + a[i][j];
    }

    cout<<sum;

    return 0;
}

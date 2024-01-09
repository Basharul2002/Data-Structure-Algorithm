/*
Find the summation of two 2D arrays and store the result in another 2D array. 

12 5 8       2  8  18      14 13 26 
6  7 4   +   16 14  5   =  22 21 9 
18 9 2       8  19 12      26 28 24 
Input (Declarations and Initializations): int A[3][3], int B[3][3], int S[3][3]; 
Process: 
1. Start from the row with row-value r=0. 
2. Start from the column with column-value c= 0. 
3. Add the value of A[r][c] with B[r][c] and store the summation in S[r][c]. 
4. Increase the value of c by 1. 
5. Repeat (3) and (4) for all the columns. 
6. Increase the value of r by 1. 
7. Repeat (2), (3), (4), (5) and (6) for all the rows. 
Output: Print the array S.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r1, r2, c1, c2, sum=0;
    cin>>r1>>c1>>r2>>c2;

    int a[r1][c1], b[r2][c2], s[r2][c2];

    // 1st Array
    for(int i=0; i<c1; i++)
    {
        for(int j=0; j<r1; j++)
            cin>>a[i][j];
        
    }

    // 2nd Array
    for(int i=0; i<c2; i++)
    {
        for(int j=0; j<r2; j++)
            cin>>b[i][j];
        
    }

    // Sum both array
    for(int i=0; i<c2; i++)
    {
        for(int j=0; j<r2; j++)
            s[i][j] = a[i][j]+b[i][j];
        
    }


    // New array print
    for(int i=0; i<c2; i++)
    {
        for(int j=0; j<r2; j++)
            cout<<s[i][j]<<" ";
        
        cout<<endl;
    }


    return 0;
}

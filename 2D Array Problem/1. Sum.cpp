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

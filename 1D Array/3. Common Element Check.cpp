/*
  Initialize TWO integer arrays A and B of different sizes. Make a new array with the common elements between A and B. Print the new array element(s). If there is no common element, output “No common element!”.

For example,
Scenario 1:
Array_1 = {1,4,6,3,6,9}
Array_2 = {5,3,7,1,2,6}

Output: 1 6 3

Scenario 2:
Array_1 = {1,4,6,3,6,9}
Array_2 = {5,8,7,12,21,63}

Output: No common element!
*/



#include<bits/stdc++.h>
using namespace std;


void findCommonElement( int arr1[], int n, int arr2[], int m, int D[], int &k );
void commonElementCheck(int arr[], int size, int &p);
void displayArray(int arr[], int k, int p);



int main()
{
   int arr1[100] = {1,4,6,3,6,9};
   int n = 6;

   int arr2[100] = {5,3,7,1,2,6};
   int m = 6;

   int arr3[m+n];
   int k=0, p=0;

   findCommonElement(arr1, n, arr2, m, arr3, k);
   commonElementCheck(arr3, k, p);
   displayArray(arr3, k, p);


    return 0;
}



void findCommonElement( int arr1[], int n, int arr2[], int m, int arr3[], int &k ) {
   k = 0;
   for( int i = 0; i < n; i++ )
    {
      for( int j = 0; j < m; j++ )
      {
         if( arr1[i] == arr2[ j ] )
         {
            arr3[k] = arr1[i];
            k = k + 1;
         }
      }
   }
}


void commonElementCheck(int arr3[], int size, int &p)
{
    bool flag = false;
    for(int i=0; i<size; i++ )
    {
        for(int j=0; j<i; j++ )
        {
            if( arr3[i] == arr3[j] )
                p++;
            

            else
                arr3[i] == arr3[j];
            
        }
    }

    return ;
}

void displayArray(int arr[], int k, int p)
{
   for(int i=0; i<k; i++ )
      cout<<arr[i]<<" ";
   
   cout<<endl;
}

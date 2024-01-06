/*
Initialize an integer array of size 10. Print the number of time each element occurs in the array.

For example,
Array_1 = {8,4,6,1,6,9,6,1,9,8}

Output:
8 occurs = 2 times
4 occurs = 1 time
6 occurs = 3 times
1 occurs = 2 times
9 occurs = 2 times
*/




#include<bits/stdc++.h>
using namespace std;

void arrayDisplay(int array[], int size);
void frequency(int arr[], int size);

int main()
{
    int array[10] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    int size = sizeof(array) / sizeof(array[0]);
    arrayDisplay(array, size);
    frequency(array, size);

    return 0;
}

void arrayDisplay(int array[], int size)
{
    cout<<"Array: ";
    for(int i=0; i<size; i++)
        cout<<array[i]<<" ";
    
    cout<<endl;
}


void frequency(int arr[], int size)
{
   bool check[size];
   for(int i=0;i<size;i++)
      check[i] = 0;
   

   for(int i=0; i<size; i++)
   {
      if(check[i]== 1)
         continue;
      
     
       int count = 1;
       for(int j = i+1; j<size; j++)
       {
           if (arr[i] == arr[j])
           {
                check[j] = 1;
                count++;
            }
        }

        if(count>1)
            cout<<arr[i]<<" occurs = "<<count<<" times"<< endl;
        

        else
            cout<<arr[i]<<" occurs = "<<count<<" time"<< endl;
        
   }

}

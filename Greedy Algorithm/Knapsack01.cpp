#include<bits/stdc++.h>
using namespace std;

struct Item
{
    int weight;
    int value;
};


bool compare(Item a, Item b)
{
    return ((double)a.value / a.weight) > ((double)b.value / b.weight);
}


int knapsack01(Item items[], int n, int capacity)
{
    int bag[n+1][capacity+1];

    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= capacity; w++)
        {
            if (i == 0 || w == 0)
                bag[i][w] = 0;

            else if (items[i - 1].weight <= w)
                bag[i][w] = max(items[i - 1].value + bag[i - 1][w - items[i - 1].weight], bag[i - 1][w]);

            else
                bag[i][w] = bag[i - 1][w];
        }
    }

    return bag[n][capacity];
}




int main()
{
    int n, capacity;
    cout<<"Enter the number of items: ";
    cin>>n;
    cout<<endl;
    Item items[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Item-"<<i+1<<endl<<"******"<<endl;
        cout<<"Enter the weight: ";
        cin>>items[i].weight;
        cout<<"Enter the profit: ";
        cin>>items[i].value;

        cout<<endl;
    }

    cout<<endl<<"Enter the knapsack capacity: ";
    cin>>capacity;

    cout<<endl<<endl<<"Optimal Solution"<<endl<<"****************"<<endl;
    cout<<"Maximum profit using 0/1 Knapsack: "<<knapsack01(items, n, capacity);


    cout<<endl<<endl;
    return 0;
}


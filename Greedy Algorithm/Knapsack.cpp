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

double fractionalKnapsack(Item items[], int n, int capacity)
{
    sort(items, items + n, compare);

    double totalValue = 0.0;
    int currentWeight = 0;

    for (int i = 0; i < n; i++)
    {
        if (currentWeight + items[i].weight <= capacity)
        {
            currentWeight += items[i].weight;
            totalValue += items[i].value;
        }

        else
        {
            int remainingCapacity = capacity - currentWeight;
            totalValue += (double)remainingCapacity * items[i].value / items[i].weight;
            break;
        }
    }

    return totalValue;
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
    cout<<"Maximum profit using Fractional Knapsack: "<<(double)fractionalKnapsack(items, n, capacity)<<endl;
    


    cout<<endl<<endl;
    return 0;
}

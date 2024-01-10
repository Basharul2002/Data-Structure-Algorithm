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

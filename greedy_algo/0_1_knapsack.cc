//for 0-1 knapsack problem using dynamic programming
# include <iostream>
# include <vector>
using namespace std;
int maxi(int a,int b)
{
    return a > b ? a:b;
}
int knapsack(int p[],int wt[], int n, int bag)
{ 
    vector <vector <int>> profit(n+1,vector <int > (bag+1)); 
    for (int i=0;i<n+1;i++)
    {
        for(int w=0;w<bag+1;w++)
        {
            if (i==0 || w==0)
            {
                profit[i][w] = 0;
            }
            else if((w-wt[i])<0)
            {
                profit[i][w] = profit[(i-1)][w];
            }
            else 
            {
                profit[i][w] = maxi(profit[(i-1)][w],profit[(i-1)][(w-wt[i])] + p[i]);
            }
        }
    }


return profit[n][bag];
}

int main()
{
    int p[4];
    int w[4];
    int n=4,bag;
    cout<<"Enter the bag size:";
    cin>>bag;
    cout<<"Enter the profit:";
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<"Enter the sacks size:";
    for (int i=0;i<n;i++)
    {
        cin>>w[i];
    }
    for (int i=0;i<n;i++)
    {
        cout<<p[i];
    }
    cout<<"\n";
    for (int i=0;i<n;i++)
    {
        cout<<w[i];
    }
    cout<<"\n";
    int max_profit = knapsack(p,w,n,bag);
    cout<<"The max profit is:"<<max_profit;

}
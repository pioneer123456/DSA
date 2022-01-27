// fractional knapsack problem
# include <bits/stdc++.h>
using namespace std;
struct Item
{
    int weight[3];
    int value[3];
    int ratio[3];
};


int fractional_knapsack(vector <int> &v, vector <int> &w,int N, int W)
{
    // sort the items in decreasing order of value/weight ratio
    sort(v.begin(),v.end(),[&w](int a, int b){return (double)a/b > (double)b/a;});
    sort()
    int i=0;
    int wt=0;
    int val=0;
    while(wt<W && i<N)
    {
        if(wt+w[i]<=W)
        {
            wt+=w[i];
            val+=v[i];
        }
        else
        {
            int r=W-wt;
            val+=r*(double)v[i]/w[i];
            wt=W;
        }
        i++;
    }
    return val;

}



int main()
{
    struct Item items;
    int N,W;
    for (int i=0;i<3;i++)
    {
        cin>>items.weight[i];
        cin>>items.value[i];
        items.ratio[i]=items.value[i]/items.weight[i];
    }

    
    int val=fractional_knapsack();
    cout<<val<<endl;
    return 0;
}
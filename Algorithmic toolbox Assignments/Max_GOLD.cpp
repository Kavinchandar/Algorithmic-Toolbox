
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int knapsack(int n,int W,vector<int> g)
{
    vector<vector<int>> value(n+1,vector<int>(W+1));

    for(int i=0 ; i<=n ; i++)
    {
        for(int w=0 ; w<=W ; w++)
        {
            if(i==0 || w==0)
                value[i][w]=0;
                
            else if(g[i-1]<= w)
                value[i][w]= max (  g[i-1] + value[i-1][w-g[i-1]] , value[i-1][w] );
                
            else
                value[i][w]=value[i-1][w];
        }
    }
    
    return value[n][W];
}

int main()
{
    int W,n;
    cin>>W>>n;
    vector<int> g(n+1);
    
    for(int i=0 ; i<n ; i++)
        cin>>g[i];
        
    //sort(g.begin(),g.end());
    
    cout<<knapsack(n,W,g)<<endl;

    return 0;
}

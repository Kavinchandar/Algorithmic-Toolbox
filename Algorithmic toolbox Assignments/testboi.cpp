
#include <iostream>
#include <algorithm>
using namespace std;

int knapsack(int n,int W,int g[],int val[])
{
    int value[n+1][W+1];

    for(int i=0 ; i<=n ; i++)
    {
        for(int w=0 ; w<=W ; w++)
        {
            if(i==0 || w==0)
                value[i][w]=0;
                
            else if(g[i-1]<=w)
                value[i][w]= max ( value[i-1][w] , value[i-1][w-g[i-1]] + val[i-1] );
                
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
    int g[n+1];
    int val[n+1];
    int temp;
    
    for(int i=0 ; i<n ; i++)
    {
        cin>>temp;
        g[i]=val[i]=temp;
    }
        
    sort(g,g+n);
    sort(val,val+n);
    
    cout<<knapsack(n,W,g,val)<<endl;

    return 0;
}

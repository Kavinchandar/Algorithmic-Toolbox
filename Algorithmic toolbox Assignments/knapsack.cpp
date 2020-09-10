
#include <bits/stdc++.h>
using namespace std;

long double knapsack(int n,int W,vector<int> v, vector<int> w)
{
    vector<double> a(n);
    
    for(int i=0;i<n;i++)
        {
            a[i]=(double)v[i]/w[i];
        }
        
    for(int i=0 ; i<n ;i++)
        {
            for(int j=i+1 ; j<n ;j++)
            {
                if(a[i]<a[j])
                {
                    swap(a[i],a[j]);
                    swap(w[i],w[j]);
                    swap(v[i],v[j]);
                }
            }
        }
        
    int cur=0;
    long double finval=0.0;
    for(int i=0;i<n;i++)
    {
        //whole
        if(cur + w[i]<=W)
        {
            cur += w[i];
            finval += v[i];
        }
        //part
        else
        {
            int remains = W - cur;
            finval +=  v[i] * ((double)remains/w[i]);
            break;
        }
    }
    
    return finval;
}

int main()
{
    int n,W;
    cin>>n>>W;
    vector <int> w(n);
    vector <int> v(n);
    
    for (int i=0;i<n;i++)
    {
        cin>>v[i]>>w[i];
    }
    
    double res = knapsack(n,W,v,w);
    
    cout << fixed << setprecision(3) << res << endl;
    

    return 0;
}
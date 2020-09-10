
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partitions(int W,vector<int> a,int n)
{
    W=W/3;
    int count=0,temp;
    vector<vector<int>> Value(W+1,vector<int>(n+1));
    
    for(int i=0 ; i<W+1 ; i++)
    {
        for(int j=0 ; j<n+1 ; j++)
        {
            Value[i][j]=0;
        }
    }
    
    for(int i=0 ; i<W+1 ; i++)
    {
        for(int j=0 ; j<n+1 ; j++)
        {
            
            Value[i][j]=Value[i][j-1];
            
            if(a[j-i] <= i)
            {
                temp = Value[i-a[j-1]][j-1] + a[j-1] ;
                if(temp > Value[i][j])
                     Value[i][j]=temp;
            }
            if(Value[i][j] == W)
                count+=1;
        }
    }
    if (count < 3)
        return 0;
    else
        return 1;
}

int sum(vector<int> a,int n)
{
    int sum = 0 ;
    for(int i=0 ; i<n ; i++)
        {
            sum += a[i];
        }
    
    return sum;
}

int main()
{
    int n,wt;
    cin>>n;
    vector<int> a(n+1);
    
    for(int i=0 ; i<n ; i++)
        cin>>a[i];
    
    wt=sum(a,n);
    
    //cout << wt << endl;
    
    if(n<3)
        cout << "0" << endl;
    else if(sum(a,n) % 3 != 0)
        cout << "0" << endl;
    else
        cout << partitions(wt,a,n) << endl;

    return 0;
}
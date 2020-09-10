#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> arr(n+1);
    
    for(int i=1 ; i<=n ; i++)
    {
        arr[i]=arr[i-1]+1;
        if(i%2==0)
            arr[i]=min(1 + arr[i/2],arr[i]);
        if(i%3==0)
            arr[i]=min(1 + arr[i/3],arr[i]);
    }
    
    cout<<arr[n]-1<<endl;
    
    
    return 0;
}

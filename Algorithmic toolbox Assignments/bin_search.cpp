
#include <bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
    return a<b;
}

int bin(int n,vector<int> a,int key)
{
    int l=0;
    int h=n-1;
    
    while(l <= h)
    {
        int mid=l+((h-l)/2);
            
        if(a[mid]<key)
            l=mid+1;
        else if(a[mid]>key)
            h=mid-1;
        else if(a[mid]==key)
            return mid;
    }
    return -1;
}
int main()
{
    int n,res=0;
    cin>>n;
    vector<int> a(n) ;
    for(int i=0 ; i<n ;i++)
        cin>>a[i];
        
    int k;
    cin>>k;
    vector<int> b(k) ;
    for(int j=0 ; j<k ;j++)
        cin>>b[j];
        
    sort(a.begin(),a.end(),cmp);
    
    for(int j=0; j<k ;j++)
        {
            res= bin(n,a,b[j]);
            cout<< res << " ";
        }
    

    return 0;
}
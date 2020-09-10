#include <bits/stdc++.h>
using namespace std;

int merge_sort(int a[],int temp[],int l,int h);
int merge(int a[],int temp[],int l,int m,int h);

int inv_count_function(int a[],int n)
{
    int temp[n];
    
    return merge_sort(a,temp,0,n-1);
}

int merge_sort(int a[],int temp[],int l,int h)
{
    int m,inv_count=0;
    
    if(h>l){
        
        int m= l+(h-l)/2;
        
        inv_count += merge_sort(a,temp,l,m);
        inv_count += merge_sort(a,temp,m+1,h);
        
        inv_count += merge(a,temp,l,m+1,h);
    }
    return inv_count;
}

int merge(int a[],int temp[],int l,int m,int h)
{
    int i,j,k; 
    int inv_count=0;
    i=l;
    j=m;
    k=l;
    
    while((i <= m-1) && (j <= h))
    {
        if(a[i]<=a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
            inv_count+=(m-i);
        }
    }
    
    while(i <= m-1)
    {
        temp[k++]=a[i++];
    }
    
    while(j <= h)
    {
        temp[k++]=a[j++];
    }
    
    for(int i=l ; i<=h ; i++)
     {
         a[i]=temp[i];
     }
    
    return inv_count;
}

void print_arr(int a[],int n)
{
    for(int i=0 ; i<n ; i++)
        cout<<a[i]<<" ";
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    
    for(int i=0 ; i<n ;i++)
    {
        cin>>a[i];
    }
    
    int ans = inv_count_function(a,n);
    
    cout <<"The No. of inversions : "<<ans<< endl;
    
    print_arr(a,n);
    
    return 0;
}
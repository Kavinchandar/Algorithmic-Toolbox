#include <bits/stdc++.h>
using namespace std;

void swap(int* a,int* b)
{
    int t = *a;
    *a = *b;
    *b =  t;
}

int partition(int a[],int l,int h)
{
    int pivot=a[h];
    int i = l-1;
    
    for(int j=l ; j<=h ;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
  
    swap(&a[i+1],&a[h]);
    
    return (i+1);
}

int quiksort(int a[],int l,int h)
{
    if(l<h)
    {
        int j = partition(a,l,h);
        
        quiksort(a,l,j-1);
        quiksort(a,j+1,h);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for (int i=0; i<n ;i++)
     {
         cin>>a[i];
     }

    quiksort(a,0,n-1);
    
    //sort(a.begin(),a.end());
    
    for (int i=0; i<n ;i++)
     {
         cout<<a[i]<<" ";
     }
    
    return 0;
}
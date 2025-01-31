
#include <bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int h)
{
    int pivot=a[h];
    int i=l-1;
    
    for(int j=l ; j<=h-1 ;j++)
     {
         if(a[j]<=pivot)
            {
                i++;
                swap(a[i],a[j]);
            }
     }
     swap(a[i+1],a[h]);
     
     return i+1;
}

int randomn_pivot(int a[],int l,int h)
{
    int x;
    
    srand(time(NULL));
    x= l + rand() % (h-l);
    
    swap(a[x],a[h]);
    
    return partition(a,l,h);
}

void quicksort(int a[],int l,int h)
{
    if(l<h)
    {
    int pi=randomn_pivot(a,l,h);
    
    quicksort(a,l,pi-1);
    quicksort(a,pi+1,h);
    }
}

int main()
{
    
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i=0;i<n;i++)
        cin>>a[i];
        
    quicksort(a,0,n-1);    
       
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        
    return 0;
}

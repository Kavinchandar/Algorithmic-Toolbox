#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*int partition(vector<int> a,int l,int h)
{
    int pivot=a[l];
    int i=l,j=h;
    while(i<j)
    {
       do{
           i++;
         }while(a[i]<=pivot);
       
       do{
           j--;
         }while(a[j]>pivot);
         
         if(i<j)
            swap(a[i],a[j]);
         
    }
    swap(a[l],a[j]);
    
    return j;
}

int quik_sort(vector<int> a,int l,int h)
{
    if(l<h)
    {
        int j = partition(a,l,h);
        quik_sort(a,l,j);
        quik_sort(a,j+1,h);
    }
}*/

int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    
    for (int i=0; i<n ;i++)
     {
         cin>>a[i];
     }

    //quik_sort(a,0,n-1);
    
    sort(a.begin(),a.end());
    for (int i=0; i<n ;i++)
     {
         cout<<a[i]<<" ";
     }
    
    return 0;
}
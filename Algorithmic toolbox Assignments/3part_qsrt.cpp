

#include <bits/stdc++.h>

using namespace std;

void partition(int a[],int l,int h,int &i,int &j)
{
  i=l-1,j=h;

  int p=l-1,q=h;
  
  int pivot=a[h];
  
  while(true){
      
      while(a[++i]<pivot);
      
      while(a[--j]>pivot)
            if(j==l)
            break;
      
      
      if(i>=j) break;
      
      swap(a[i],a[j]);
      
      if(a[i]==pivot)
      {
          p++;
          swap(a[p],a[i]);
      }
      
      if(a[j]==pivot)
      {
          q--;
          swap(a[j],a[q]);
      }
  }
  swap(a[i],a[h]);
  
  j=i-1;
  for(int k=l ; k<p ; k++,j--)
     swap(a[k],a[j]);
     
  i=i+1;
  for(int k=h-1 ; k>q ; k--,i++)
     swap(a[k],a[i]);
}

void quick_sort3(int a[],int l,int h)
{
    if(l>=h) return;
    
    int i,j;
    
    partition(a,l,h,i,j);
    
    quick_sort3(a,l,j);
    quick_sort3(a,i,h);
    
}

int print_array(int a[],int n)
{
    for(int i=0 ; i<n ; i++)
        cout << a[i] << " ";
}
    


int main()
{
   int n;
   cin>>n;
   int a[n];
   
   for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    
    quick_sort3(a,0,n-1);
    
    print_array(a,n);

    return 0;
}

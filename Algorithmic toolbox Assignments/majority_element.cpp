

#include <bits/stdc++.h>
using namespace std;

int find_candidate(int a[], int n)
{
    int count=1;
    int index=0;
    for(int i=0 ; i<n ; i++)
    {
        if(a[index]==a[i])
            count++;
        else
            count--;
        if(count == 0)
        {
            index=i;
            count=1;
        }
    }
    
    return a[index];
}

bool ismajor(int a[], int n, int cand)
{
    int count = 0; 
    for(int i=0 ; i<n ; i++)
    
    if(cand == a[i])
    count++;
    
    if(count > n/2)
    return 1;
    
    else
    return 0;
}
void printmajor(int a[], int n)
{
     
    int cand = find_candidate(a,n);
    
    if(ismajor(a,n,cand))
        cout << 1;
    else
        cout << 0;

}
int main()
{
    int n;
    cin >> n;
    int a[n];
    
    for (int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    
    printmajor(a,n);
    
    return 0;
}
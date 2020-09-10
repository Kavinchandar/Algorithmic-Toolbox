
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(long long a,long long b)
{
    if(a<b)
        return 1;
    else
        return 0;
}
long long max(long long n,vector<long long> A,vector<long long> B)
{
    long long sum=0;
    sort(A.begin(),A.end(),cmp);
    sort(B.begin(),B.end(),cmp);
    
    for(long long i=0 ; i<n ;i++)
    {
        sum += A[i]*B[i];
    }
    return sum;
}

int main()
{
   long long n;
   cin >> n;
   vector<long long> A(n);
   vector<long long> B(n);
   
   for(long long i=0 ; i<n ; i++)
        {
            cin>>A[i];
        }
        
   for(long long i=0 ; i<n ; i++)
        {
            cin>>B[i];
        }
        
    long long res = max(n,A,B);
    
    cout << res << endl;

    return 0;
}
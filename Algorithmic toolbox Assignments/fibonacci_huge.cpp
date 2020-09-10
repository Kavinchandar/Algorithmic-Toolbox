#include <iostream>

using namespace std;

long long int fib(long long int n)
{
   long long int f[n+2];
    f[0]=0;
    f[1]=1;
    
    for(long long int i=2;i<=n;i++)
        {
            f[i]=(f[i-1]+f[i-2]);
        }
  
          return f[n];
    
}

int main()
{
    long long int n;
    cin>>n;
    long long int res = fib(n);
    cout <<res<<"\n";

    return 0;
}

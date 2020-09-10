#include <iostream>

using namespace std;

long long sum(long long n)
{
    n=(n)%60;
    int f[n+2];
    f[0]=0;
    f[1]=1;
    
    for(int i = 2 ; i <= n+2 ; i++ )
    {
        f[i]=(f[i-1]%10 + f[i-2]%10)%10 ;
    }


    return (f[n]*f[n+1])%10 ;
}

int main()
{
    long long n;
    cin >> n;
    cout << sum(n) << "\n" ;
    return 0;
}
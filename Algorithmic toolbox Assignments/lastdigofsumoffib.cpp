#include <iostream>

using namespace std;

long long sum(long long n)
{
    n=(n+2)%60;
    int f[n+1];
    f[0]=0;
    f[1]=1;
    
    for(int i = 2 ; i <= n ; i++ )
    {
        f[i]=(f[i-1] %10 + f[i-2] %10) %10 ;
    }
    
    if(f[n+2]==0)
    {
        return 9;
    }

    return f[n]%10-1 ;
}

int main()
{
    long long n;
    cin >> n;
    cout << sum(n) << "\n" ;
    return 0;
}
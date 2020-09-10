#include <iostream>
using namespace std;

long long last(long long m, long long n)
{
    n=(n)%60;
    m=(m)%60;
    int f[n+2];
    int b[m+2];
    f[0]=0;
    f[1]=1;
    b[0]=0;
    b[1]=1;
    for(int i=2 ; i <= n+2 ; i++)
    {
        f[i]=(f[i-1]%10+f[i-2]%10)%10;
    }
      for(int j=2 ; j <= m+2 ; j++)
    {
        b[j]=(b[j-1]%10+b[j-2]%10)%10;
    }
    
    int boi = (f[n+2]-b[m+1]) ;

    if (boi < 0)
        return boi + 10;
    else
        return boi ;
}

int main()
{
    long long m,n;
    
    cin >> m >> n; 
    
    cout << last(m,n) << "\n";
}
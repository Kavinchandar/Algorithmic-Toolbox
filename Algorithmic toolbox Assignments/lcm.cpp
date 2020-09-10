#include <iostream>

using namespace std;
    
long int gcdfunction(long int a,long int b)
{
    if (b==0)
    {
        return a;
    }
    long int r=a%b;
    return gcdfunction(b,r);
}

int main()
{
    long int a,b;
    cin>>a>>b;
    long int res=gcdfunction(a,b);
    long int lcm;
    lcm= (a*b)/res;
    cout<<lcm;
    return 0;
}

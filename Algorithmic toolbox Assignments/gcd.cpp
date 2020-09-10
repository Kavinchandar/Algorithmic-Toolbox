#include <iostream>

using namespace std;
    
int gcdfunction(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    int r=a%b;
    return gcdfunction(b,r);
}

int main()
{
    int a,b;
    cin>>a>>b;
    int res=gcdfunction(a,b);
    cout<<res;
    return 0;
}

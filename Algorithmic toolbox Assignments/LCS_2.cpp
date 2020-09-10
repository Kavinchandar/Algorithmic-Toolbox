
#include <bits/stdc++.h>
using namespace std;

int Lcs(int One[],int Two[],int m,int n)
{
    int longest[m+1][n+1];
    
    for(int i=0 ; i<=m ; i++)
        {
            for(int j=0 ; j<=n ; j++)
            {
                if(i==0 || j==0)
                    longest[i][j]=0;
                    
                else if(One[i-1]==Two[j-1])
                    longest[i][j]=longest[i-1][j-1]+1;
                    
                else
                    longest[i][j]=max(longest[i-1][j],longest[i][j-1]);
            }
        }
    return longest[m][n];
}


int main()
{
    int m,n;
    
    cin>>m;
    int One[m];
    
    for(int i=0 ; i<m ; i++)
        cin>>One[i];
    
    cin>>n;
    int Two[n];
    
    for(int i=0 ; i<n ; i++)
        cin>>Two[i];
    
    cout << Lcs(One,Two,m,n) << endl;
    
    return 0;
}

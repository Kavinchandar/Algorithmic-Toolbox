

#include <bits/stdc++.h>
using namespace std;

int Lcs_3(int One[],int Two[],int Three[],int m,int n,int o)
{
    int longest[m+1][n+1][o+1];
    
    for(int i=0 ; i<=m ; i++)
        {
            for(int j=0 ; j<=n ; j++)
            {
                for(int k=0 ; k<=o ; k++)
                {
                    if(i==0 || j==0 || k==0)
                        longest[i][j][k]=0;
                        
                    else if(One[i-1]==Two[j-1] && One[i-1]==Three[k-1])
                        longest[i][j][k]=longest[i-1][j-1][k-1] + 1;
                        
                    else
                        longest[i][j][k]=max(max(longest[i-1][j][k],longest[i][j-1][k]),longest[i][j][k-1]);
                    
                }
            }
        }
    return longest[m][n][o];
}

int main()
{
    int m,n,o;
    
    cin>>m;
    int One[m];
    for(int i=0 ; i<m ; i++)
        cin>>One[i];
    
    cin>>n;
    int Two[n];
    for(int i=0 ; i<n ; i++)
        cin>>Two[i];
    
    cin>>o;
    int Three[o];
    for(int i=0 ; i<o ; i++)
        cin>>Three[i];
        
    cout << Lcs_3(One,Two,Three,m,n,o) << endl;    

    return 0;
}

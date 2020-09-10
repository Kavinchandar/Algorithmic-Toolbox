

#include <bits/stdc++.h>
using namespace std;

int editdistance(string str1,string str2,int m,int n)
{
    vector<vector<int>> word(m+1,vector<int>(n+1));
    
    for(int i=0 ; i<=m ; i++)
    {
        for(int j=0 ; j<=n ; j++)
        {
            if(i == 0)
                word[i][j]=j;
                
            else if(j == 0)
                word[i][j]=i;
            
            else if(str1[i-1] == str2[j-1])
                word[i][j]=word[i-1][j-1];
            
            else
                word[i][j] = 1 + min(min(word[i][j - 1], word[i - 1][j]), word[i - 1][j - 1]);
        }
    }
    
    return word[m][n];
}

int main()
{
    string str1,str2;
    
    cin >> str1 >> str2;
    
    cout << editdistance(str1,str2,str1.size(),str2.size()) << endl;

    return 0;
}

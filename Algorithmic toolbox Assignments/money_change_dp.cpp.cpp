#include <bits/stdc++.h>
using namespace std;

int change(int m,int d[])
{
    vector<int> min_no(m+1);
    
    min_no[0]=0;
    
    for(int i=1 ; i<=m ; i++)
    {
        min_no[i]=INT_MAX;
        
        for(int j=0 ; j<3 ; j++)
            {
                if (i >= d[j])
                {
                    int no = min_no[i-d[j]] + 1;
                    if(no < min_no[i])
                        min_no[i]=no;
                }
            }
    }
    
    return min_no[m];
}

int main()
{
    int m;
    cin>>m;
    
    int d[3]={1,3,4};
    
    cout << change(m,d) << endl;
    
    return 0;
}

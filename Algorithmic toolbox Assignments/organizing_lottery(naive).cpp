

#include <bits/stdc++.h>
using namespace std;

struct Segment
{
    int x,y;
};
  


int main()
{
  int ns,np,count=0;
  cin>>ns>>np;
  
  Segment S[ns];
  int P[np];
  
  for(int i=0 ; i<ns ; i++)
    cin>>S[i].x>>S[i].y;
    
  for(int i=0 ; i<np ; i++)
    cin>>P[i];
    

  
    
    for(int i=0 ; i<np ; i++)
    {
        count=0;
        for(int j=0 ; j<ns ;j++)
            {
                if(P[i] >= S[j].x && P[i] <= S[j].y)
                    {
                        count++;
                    }
            }
         cout<<count<<" ";
    }
    

    
    
    return 0;
}
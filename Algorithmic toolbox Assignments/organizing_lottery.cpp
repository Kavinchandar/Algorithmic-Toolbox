

#include <bits/stdc++.h>
using namespace std;

struct Segment
{
    int x,y;
};
  
int compareX(Segment a,Segment b)
{
    return a.x<b.x;
}

int lottery(Segment S[],int P[],int ns,int np)
{
    int mid = ns/2;
    Segment midpoint = S[mid];
    
    for(int i=0 ; i<np ; i++)
    {
        int count=0;
        if(P[i] > S[mid].y)
        {
            lottery(S+mid,P,ns-mid,np);
        }
        else if(P[i] < S[mid].x)
        {
            lottery(S,P,mid,np);
        }
        else if(P[i] >= S[mid].x && P[i] <= S[mid].y)
        {
            count++;
        }
        cout << count << " ";
    }
}

int main()
{
  int ns,np;
  cin>>ns>>np;
  
  Segment S[ns];
  int P[np];
  
  for(int i=0 ; i<ns ; i++)
    cin>>S[i].x>>S[i].x;
    
  for(int i=0 ; i<np ; i++)
    cin>>P[i];
    
  sort(S,S+ns,compareX);
  
    /*
    for(int i=0 ; i<p ; i++)
    {
        count=0;
        for(int j=0 ; j<s ;j++)
            {
                if(P[i] >= S[j].a && P[i] <= S[j].b)
                    {
                        count++;
                    }
            }
         cout<<count<<" ";
    }
    */

    lottery(S,P,ns,np);
    
    return 0;
}



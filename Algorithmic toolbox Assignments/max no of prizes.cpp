#include <iostream>
#include <vector>
using namespace std;

vector<int> numbers(int n)
{
    vector<int> num;
    int k=0,l=0;
    for(k=n,l=1;k>0;l++)
    {
        if(k <= 2*l)
        {
            num.push_back(k);
            k = 0;
        }
        else
        {
            num.push_back(l);
            k -= l;
        }
    }
    return num;
}

int main()
{
    int n;
    cin>>n;
    
    vector<int> prize = numbers(n);
    
    cout << prize.size() << endl;
    
    for(int i=0 ; i<prize.size() ; i++)
    {
        cout << prize[i] << " ";
    }
}
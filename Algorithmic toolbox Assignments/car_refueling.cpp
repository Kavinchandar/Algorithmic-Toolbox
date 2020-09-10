#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int n,int tank, vector<int> &stops) 
{
    int num_refills=0,current_refill=0;
    int last_refill=0;
    while (current_refill <= n)
    {
        last_refill = current_refill ;
        
        while ( current_refill <= n && (stops[current_refill+1]-stops[last_refill]) <= tank)
        {
            current_refill += 1;
        }
        if (current_refill == last_refill)
        {
            return -1;
        }
        if (current_refill <= n)
        {
            num_refills += 1;
        }
       
    } 
    return num_refills;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;
    
    vector<int> stops(n+1);
    stops[0]=0;
    stops.push_back(d);
    for (size_t i = 1; i <= n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills( n, m, stops) << "\n";

    return 0;
}
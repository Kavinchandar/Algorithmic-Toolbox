#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
using namespace std; 
  
int myCompare(string X, string Y) 
{ 
    string XY = X.append(Y); 
    string YX = Y.append(X); 
    return XY.compare(YX) > 0 ? 1: 0; 
} 
  
void printLargest(vector<string> arr) 
{ 
    sort(arr.begin(), arr.end(), myCompare); 
    for (int i=0; i < arr.size() ; i++ ) 
        cout << arr[i]; 
} 

int main() 
{   
    int n;
    cin>>n;
    string input;
    vector<string> arr; 
    
    for(int i=0 ; i<n;i++){
    cin>>input; 
    arr.push_back(input); 
    }

    printLargest(arr); 
  
   return 0; 
} 
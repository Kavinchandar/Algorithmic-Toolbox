#include <iostream>
#include <vector>
using namespace std;
 
template <typename T>
T calc_fibModm(T n, T m)
{
  T fn=0, fn_minus1=1,fn_minus2=1;

  if (n==0)
      return 0;
  else if (n==1 || n==2)
      return 1;
  else {
     for (T i=2; i<n; i++){
      fn =( fn_minus1 % m + fn_minus2 % m) %m ;
      fn_minus2 = fn_minus1;
      fn_minus1 = fn;
     }
   }
 
  return fn;
}

template <typename T>
T findPeriod(T  n,T  m)
{
  vector<T > vMod;
  for (T i=0; i<n; i++){
    T modi = calc_fibModm(i,m);
    vMod.push_back(modi);
 
    if (i>2 && vMod[i] ==1 && vMod[i-1] == 0) {
 
    
      bool bAllOk= true;
      for (T j=i-1; j<2*i-3+1; j++){
          T modi_forward =  calc_fibModm(j,m);
          if (vMod[j-(i-1)] != modi_forward) {
            bAllOk=false;
            break;
          }
      }
       
      if (bAllOk) {
        T period = i-1;
        return period;
      }
    }
  } 
 
  string errStr="Not big enough n=("+to_string(n)+") to catch periodicity. Increase n to get periodicity";
  throw runtime_error(errStr);
  return -1;
}
 
template <typename T>
T get_fibonacci_huge(T n,T m) { 
 
  if (m==1){
    return 0;
  } else {
    T period = findPeriod(n,m);
    return calc_fibModm((n%period), m); 
  }
}
 
int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout <<get_fibonacci_huge(n, m) << '\n';
}#include <iostream>
#include <vector>
using namespace std;
 
template <typename T>
T calc_fibModm(T n, T m)
{
  T fn=0, fn_minus1=1,fn_minus2=1;

  if (n==0)
      return 0;
  else if (n==1 || n==2)
      return 1;
  else {
     for (T i=2; i<n; i++){
      fn =( fn_minus1 % m + fn_minus2 % m) %m ;
      fn_minus2 = fn_minus1;
      fn_minus1 = fn;
     }
   }
 
  return fn;
}

template <typename T>
T findPeriod(T  n,T  m)
{
  vector<T > vMod;
  for (T i=0; i<n; i++){
    T modi = calc_fibModm(i,m);
    vMod.push_back(modi);
 
    if (i>2 && vMod[i] ==1 && vMod[i-1] == 0) {
 
    
      bool bAllOk= true;
      for (T j=i-1; j<2*i-3+1; j++){
          T modi_forward =  calc_fibModm(j,m);
          if (vMod[j-(i-1)] != modi_forward) {
            bAllOk=false;
            break;
          }
      }
       
      if (bAllOk) {
        T period = i-1;
        return period;
      }
    }
  } 
 
  string errStr="Not big enough n=("+to_string(n)+") to catch periodicity. Increase n to get periodicity";
  throw runtime_error(errStr);
  return -1;
}
 
template <typename T>
T get_fibonacci_huge(T n,T m) { 
 
  if (m==1){
    return 0;
  } else {
    T period = findPeriod(n,m);
    return calc_fibModm((n%period), m); 
  }
}
 
int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout <<get_fibonacci_huge(n, m) << '\n';
}#include <iostream>
#include <vector>
using namespace std;
 
template <typename T>
T calc_fibModm(T n, T m)
{
  T fn=0, fn_minus1=1,fn_minus2=1;

  if (n==0)
      return 0;
  else if (n==1 || n==2)
      return 1;
  else {
     for (T i=2; i<n; i++){
      fn =( fn_minus1 % m + fn_minus2 % m) %m ;
      fn_minus2 = fn_minus1;
      fn_minus1 = fn;
     }
   }
 
  return fn;
}

template <typename T>
T findPeriod(T  n,T  m)
{
  vector<T > vMod;
  for (T i=0; i<n; i++){
    T modi = calc_fibModm(i,m);
    vMod.push_back(modi);
 
    if (i>2 && vMod[i] ==1 && vMod[i-1] == 0) {
 
    
      bool bAllOk= true;
      for (T j=i-1; j<2*i-3+1; j++){
          T modi_forward =  calc_fibModm(j,m);
          if (vMod[j-(i-1)] != modi_forward) {
            bAllOk=false;
            break;
          }
      }
       
      if (bAllOk) {
        T period = i-1;
        return period;
      }
    }
  } 
 
  string errStr="Not big enough n=("+to_string(n)+") to catch periodicity. Increase n to get periodicity";
  throw runtime_error(errStr);
  return -1;
}
 
template <typename T>
T get_fibonacci_huge(T n,T m) { 
 
  if (m==1){
    return 0;
  } else {
    T period = findPeriod(n,m);
    return calc_fibModm((n%period), m); 
  }
}
 
int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout <<get_fibonacci_huge(n, m) << '\n';
}
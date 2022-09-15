// C++ implementation of above approach
#include <iostream>
#include <math.h> // For sqrt() and cbrt()
 
using namespace std;
 
// Function to count the number
// of perfect squares and cubes
 
int countSC(int N)
{
 
    int res = (int)sqrt(N) + (int)cbrt(N)
 
              - (int)(sqrt(cbrt(N)));
 
 
    return res;
}
 
int main() {
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  cout<<countSC(n)<<endl;
  }
}
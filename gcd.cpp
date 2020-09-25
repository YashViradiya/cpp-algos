//eucledian algorithm for finding gcd of two numbers
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
}

int main(){
  int a,b;
  cin>>a>>b;
  cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
  return 0;
}

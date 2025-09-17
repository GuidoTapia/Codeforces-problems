#include <iostream>
#include <bitset>
using namespace std;
int main() {
  int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0;
  int n;
  string bit_string;
  cin>>n;
  for(;n;--n){
    cin>>bit_string;
    a1+=(bit_string[0]-48);
    a2+=(bit_string[1]-48);
    a3+=(bit_string[2]-48);
    a4+=(bit_string[3]-48);
    a5+=(bit_string[4]-48);
    a6+=(bit_string[5]-48);
    a7+=(bit_string[6]-48);
  }
  cout<<max(max(max(a1,a2),max(a3,a4)),max(max(a5,a6),a7));
}
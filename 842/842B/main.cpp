#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <cmath>
#include <climits>

using namespace std;
int main() {
  int r,d,n,cont=0;
  cin>>r>>d>>n;
  d=r-d;
  for(;n;--n){
    int x,y,radio;
    cin>>x>>y>>radio;
    double h=hypot(x,y);
    if(h-radio>=d && h+radio<=r)
      cont++;
  }
  cout<<cont;
  return 0;
}

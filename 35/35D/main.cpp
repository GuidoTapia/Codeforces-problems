#include <iostream>
#include <math.h>
#include <algorithm>    // std::sort
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <cmath>
#include <climits>
using namespace std;

	
int main(){
  freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
  int n, m;
  cin>>n>>m;
  vector<int>animales(n,0);
  for(int i=0;i<n;++i){
    cin>>animales[i];
    animales[i]*=(n-i);
  }
  sort(animales.begin(),animales.end());
  int i=0;
  while(m>=animales[i] && i<n){
    m-=animales[i];
    ++i;
  }
  cout<<i;
  return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <cmath>
#include <climits>
using namespace std;

int main(){
  int n,m;
  int cab[300001]={};
  set<int>deadpool;
  
  cin>>n>>m;
	for(int i=1;i<=n;++i)
    deadpool.insert(i);
  int l,r,x;
	for(;m;--m){
		cin>>l>>r>>x;
		for(set<int>::iterator it=deadpool.lower_bound(l);*it<=r && it!=deadpool.end();){
      cab[*it]=x;
      deadpool.erase(it++);
    }
    deadpool.insert(x);
    cab[x]=0;
	}
  for(int i=1;i<=n;++i){
    cout<<cab[i]<<" ";
  }
  return 0;
}

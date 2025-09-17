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
  int n,m;
  cin>>n>>m;
  vector<long long>arr(n,0);
  vector<long long>dp(n,0);
  for(int i=0;i<n;++i){
    cin>>arr[i];
  }
  set<long long>conj;
  for(int i=n-1;i>-1;--i){
    conj.insert(arr[i]);
    dp[i]=conj.size();
  for(int i=0;i<m;++i){
    int j;
    cin>>j;
    cout<<dp[j-1]<<endl;
  return 0;
}

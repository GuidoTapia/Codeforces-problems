#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <cmath>
#include <climits>
#define ll long long
using namespace std;

int main() {
  ll n,m;
  cin>>n;
  vector<ll> arr(n,0);
  vector<ll> suma(n+1,0);
  vector<ll> arr2(n,0);
  vector<ll> suma2(n+1,0);
  for(ll i=0;i<n;++i){
    cin>>arr[i];
    arr2[i]=arr[i];
  }
  sort(arr2.begin(),arr2.end());
  suma[0]=0;
  suma2[0]=0;
  for(ll i=0;i<n;++i){
    suma[i+1]=suma[i]+arr[i];
    suma2[i+1]=suma2[i]+arr2[i];
  }
  cin>>m;
  ll a,l,r;
  for(ll i=0;i<m;++i){
    cin>>a>>l>>r;
    if(a==1){
      cout<<suma[r]-suma[l-1]<<endl;
    }else{
      cout<<suma2[r]-suma2[l-1]<<endl;
    }
  }
  return 0;
}

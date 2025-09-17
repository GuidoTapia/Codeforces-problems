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
  char c;
  cin>>n>>m>>c;
  char mat[101][101];
  for(int i=0;i<n;++i){
    cin>>mat[i];
  }
  set<char> grupo;
    for(int j=0;j<m;++j){
      if(mat[i][j]==c){
        if(i<n-1)
        grupo.insert(mat[i+1][j]);
        if(i)
        grupo.insert(mat[i-1][j]);
        if(j<m-1)
        grupo.insert(mat[i][j+1]);
        if(j)
        grupo.insert(mat[i][j-1]);
      }
    }
  grupo.erase(c);
  grupo.erase('.');
  cout<<grupo.size();
}

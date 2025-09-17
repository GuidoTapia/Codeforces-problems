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
  vector<vector<int> > mat(n,vector<int>(m,0));
  for(int i=0;i<n;++i){
    for(int j=0;j<m;++j){
      cin>>mat[i][j];
    }
  }
  n-=2;
  m-=2;
  for(;n;--n){
    for(int j=m;j;--j){
      if(!mat[n][j]){
        mat[n][j]=min(mat[n+1][j],mat[n][j+1])-1;
      }
  int suma=0;
  for(int i=0;i<mat.size()-1;++i){
    for(int j=0;j<mat[0].size()-1;++j){
      if(mat[i][j]>=mat[i+1][j] || mat[i][j]>=mat[i][j+1]){
        cout<<-1;
        return 0;
      suma+=mat[i][j];
    if(mat[i][mat[0].size()-1]>=mat[i+1][mat[0].size()-1]){
      cout<<-1;
      return 0;
    suma+=mat[i][mat[0].size()-1];
  for(int j=0;j<mat[0].size()-1;++j){
    if(mat[mat.size()-1][j]>=mat[mat.size()-1][j+1]){
    suma+=mat[mat.size()-1][j];
  cout<<suma+mat[mat.size()-1][mat[0].size()-1];
}

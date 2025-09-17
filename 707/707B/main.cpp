#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
  int n,m,k;
  int a[100001];
  int b[100001];
  long long dist[100001];
  int c[100001]={};
  cin>>n>>m>>k;
  for(int i=0;i<m;++i){
    cin>>a[i]>>b[i]>>dist[i];
  }
  for(;k;--k){
    int aux;
    cin>>aux;
    c[aux]=1;
  }
  long long minimo= 10000000000;
  for(int i=0;i<m;++i){
    if(c[a[i]]!=c[b[i]])
      minimo=min(minimo,dist[i]);
  }
  if(minimo<10000000000)
    cout<<minimo;
  else
    cout<<-1;
}
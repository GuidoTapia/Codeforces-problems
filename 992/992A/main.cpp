#include <iostream>
#include <vector>
using namespace std;
int n,aux;
int main() {
  vector<bool> arraux(100000,0);
  vector<bool> arrauxn(100000,0);
  cin>>n;
  int cont=0;
  for(int i=0;i<n;++i){
    cin>>aux;
    arraux[0]=1;
    if(aux<0){
      if(!arrauxn[-aux]){
        ++cont;
        arrauxn[-aux]=1;
      }
    }else{
      if(!arraux[aux]){
        ++cont;
        arraux[aux]=1;
      }
    }
  }
  cout<<cont;
}
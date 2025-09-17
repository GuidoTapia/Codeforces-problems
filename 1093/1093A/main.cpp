#include <iostream>
using namespace std;

int main() {
  int n,m;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m;
    int cont=1;
    while(m>7){
      m-=7;
      cont++;
    }
    cout<<cont<<endl;
  }
}
#include <iostream>
#include <string> 
#include <sstream> 
using namespace std;
int main() {
  int n,num;
  cin>>n;
  string celda;
  for(int i=0;i<n;++i){
    cin>>celda;
    string::size_type aux=celda.find('C',2);
    if(celda[0]=='R' && aux!=string::npos && celda[aux-1]<60){
      stringstream conver(celda.substr(aux+1));
      conver>>num;
      string aux2;
      while(num>0){
        --num;
        aux2.insert(0,1,(char)65+num%26);
        num/=26;
      }
      cout<<aux2<<celda.substr(1,aux-1)<<endl;
    }else{
      int ii=0;
      int aux2=0;
      while(celda[ii]>60){
        aux2*=26;
        aux2+=celda[ii]-64;
        ++ii;
      }
      cout<<'R'<< celda.substr(ii) <<'C'<<aux2<<endl;
    }
  }
}
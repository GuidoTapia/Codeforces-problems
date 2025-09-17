#include <iostream>
using namespace std;

int main() {
    int n,s;
    cin>>n;
    cin>>s;
    int cont=1;
    while(s>n){
      s-=n;
      cont++;
    }
    cout<<cont<<endl;

}
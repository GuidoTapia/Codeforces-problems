#include<iostream>
#include<set>
using namespace std;

int main(){
  int n;
  set<int>limites;
	cin>>n ;
  int aux,cont=0;
	for(int i=1;i<=n;++i){
		cin>>aux;
		if(aux==i)
			++cont;
		else
			limites.insert(aux);
	}
	cout << cont + limites.size()/2 ;
}
#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int **cuad=new int*[n];
  cuad[0]= new int[n*n];
  for(int i=1;i<n;++i){
    cuad[i]=cuad[0]+i*n;
  }
  int m=n/2;
  int ii=0;
  for(int i=0;i<m;++i){
    for(int j=0;j<m;++j){
      cuad[i][j]=(ii<<2)+1;
      cuad[i+m][j]=(ii<<2)+2;
      cuad[i][j+m]=(ii<<2)+3;
      cuad[i+m][j+m]=ii<<2;
      ++ii;
    }
  }
  int sum=0;
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      cout<<cuad[i][j]<<' ';
    }
    cout<<endl;
  }
}
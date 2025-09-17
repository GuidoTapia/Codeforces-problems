#include <iostream>
#include <math.h>
using namespace std;
const unsigned long long  mod=1000000007;
int main() {
  unsigned long long combinatoria[101][101];
  unsigned long long dp[10][101];
  int numeros[10];
  int n;
  cin>>n;
  for(int i=0;i<10;++i)
    cin>>numeros[i];
  for(int i=0;i<101;++i){
    combinatoria[i][0]=1;
    combinatoria[i][1]=i;
    for(int j=2;j<i;++j){
      combinatoria[i][j]=(combinatoria[i-1][j]+combinatoria[i-1][j-1])%mod;
    }
    combinatoria[i][i]=1;
    for(int j=i+1;j<101;++j){
      combinatoria[i][j]=0;
    }
  }
  for(int i=0;i<numeros[9];++i){
    for(int j=0;j<10;++j)
      dp[j][i]=0;
  }
  for(int i=numeros[9];i<=n;++i){
    dp[9][i]=1;
    //cout<<i<<" "<<dp[9][i];
    for(int j=8;j>0;--j){
      dp[j][i]=0;
      for(int k=numeros[j];k<=i;++k){
        dp[j][i]+=(dp[j+1][i-k]*combinatoria[i][k])%mod;
        dp[j][i]%=mod;
      }
      //cout<<" "<<dp[j][i];
    }
    dp[0][i]=0;
    if(i){
    for(int k=numeros[0];k<=i;++k){
      dp[0][i]+=(dp[1][i-k]*combinatoria[i-1][k])%mod;
      dp[0][i]%=mod;
    }
    }
    //cout<<" "<<dp[0][i]<<endl;
  }
  int suma=0;
  for(int i=0; i<=n;++i)
    suma=(suma+dp[0][i])%mod;
  cout<<suma;
  //cout<<endl<<combinatoria[100][20];
}
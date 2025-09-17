#include <iostream>
#include <stdlib.h>

int main() {
  int n,x,y;
  for(int i =0; i<5;i++){
    for(int j =0; j<5;j++){
      std::cin>>n;
      if(n==1){
        x=i;
        y=j;
      }
    }
  }
  std::cout << abs(2-x)+abs(2-y);
}
#include <iostream>
#include <stdlib.h>

int main() {
  int n;
  std::cin>>n;
  for(int i =0; i<n;i++){
    if(i>0){
      std::cout<<" that ";
    }
    if(i%2){
      std::cout<<"I love";
    }else{
      std::cout<<"I hate";
    }
  }
  std::cout<<" it";
}
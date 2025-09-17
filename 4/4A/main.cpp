#include <iostream>

int main() {
  int n;
  std::cin >> n;
  if(n%2==0 && n>3){
    std::cout << "YES";
  }else{
    std::cout << "NO";
  }
}
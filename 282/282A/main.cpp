#include <iostream>

int main() {
  int n;
  int x=0;
  std::string codeLine;
  std::cin >> n;
  for (int i=0;i<n;i++){
    std::cin >> codeLine;
    if (codeLine[1]=='+'){
      x++;
    }else{
      x--;
    }
  }
  std::cout << x;
}
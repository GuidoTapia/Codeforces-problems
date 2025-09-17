#include <iostream>

int main() {
  int n, a,b,c;
  int count=0;
  std::cin >> n;
  for (int i=0;i<n;i++){
    std::cin >> a>>b>>c;
    if (a+b+c>=2){
      count++;
    }
  }
  std::cout << count;
}
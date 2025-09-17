#include <iostream>

int main() {
  int n,k;
  int arr[50];
  std::cin >> n >> k;
  for (int i=0;i<n;i++){
    std::cin >> arr[i];
  }
  int minimum =arr[k-1];
  int i=n-1;
  while (i>=0 && (arr[i]< minimum || arr[i]==0)){
    i--;
  }
  std::cout << i+1;
}
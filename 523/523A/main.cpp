#include <iostream>
#include <vector>
using namespace std;
int x,y;
int main() {
  cin>>x>>y;
  vector<vector<char> > image(y, vector<char>(x,0));
  for(y=0;y<image.size();++y){
    for(x=0;x<image[0].size();++x){
      cin>>image[y][x];
    }
  }
  
  for(y=0;y<image[0].size();++y){
    for(int i=2;i;--i){
    for(x=0;x<image.size();++x){
      cout<<image[x][y]<<image[x][y];
    }
    cout<<endl;
    }
  }
}
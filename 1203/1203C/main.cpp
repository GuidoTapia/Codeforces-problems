#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long max;;
    cin>>max;
    long long number;
    for(int i=1;i<n;++i){
      cin>>number;
      max=gcd(number,max);
    }
    double s=sqrt(max);
    number=0;
    for(int i=1;i<s;++i){
      if(!(max%i)){
        number+=2;
      }
    }

    cout<<(number+(s-(int)s<0.0001));
}
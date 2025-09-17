#include <iostream>

using namespace std;

int main()
{
    long long n,i;
    cin>>n>>i;
    for(;i;--i){
        if(n%10){
            --n;
        }else{
            n/=10;
        }
    }
    cout<<n;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    long long k;
    long long A;
    long long B;
    cin>>n>>k>>A>>B;
    long long cont=0;
    float aux=(float)B/A;
    if(k==1 || (n-1)*A<=B){
        cout<<(n-1)*A<<endl;
        return 0;
    }
    while(n>1 && (n-1)*A>B){
        if(!(n%k) ){
            if( n-(n/k)>aux){
                n/=k;
                cont+=B;
            }else{
                cont+=(A*k);
                n-=k;
            }
        }else{
            cont+=(A*(n%k));
            n-=(n%k);
        }
    }
    cont+=(A*n);
    cout<<cont-A<<endl;
}
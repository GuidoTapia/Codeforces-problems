#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    long long area,x=1;
    cin>>area;
    for(long long i=2;i<sqrt(area)+1; ++i){
        if(!(area%i))
            x=i;
    }
    cout<<2*x+(area/x)*2;
    return 0;
}

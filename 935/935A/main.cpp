#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
    long long n,cont=1;
    cin>>n;
    int i=2;
    for(;i<sqrt(n);++i){
        if(!(n%i))
            cont+=2;
    }
    if(i==sqrt(n))
        cont++;
    cout<<cont;
    return 0;
}
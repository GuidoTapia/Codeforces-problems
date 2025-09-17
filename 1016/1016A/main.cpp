#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
    long long n,m,cont=0,aux;
    cin>>n>>m;
    for(;n;--n){
        cin>>aux;
        cont+=aux;
        cout<<cont/m<<' ';
        cont%=m;
    }
    return 0;
}
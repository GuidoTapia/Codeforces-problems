#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
    int n,b;
    cin>>n>>b;
    vector<int>arr (n,0);
    vector<int>aux (n,0);
    vector<int>cortes;
    cin>>arr[0];
    if(arr[0]&1)
        aux[0]=1;
    else
        aux[0]=-1;
    int cont=0;
    for(int i=1;i<n-1;++i){
        cin>>arr[i];
        if(arr[i]&1)
            aux[i]=aux[i-1]+1;
        else
            aux[i]=aux[i-1]-1;
        if(!aux[i-1]){
            cortes.push_back(abs(arr[i]-arr[i-1]));
            cont+=abs(arr[i]-arr[i-1]);
        }
    }
    sort(cortes.begin(),cortes.end());
    while(cont>b){
        cont-=cortes[cortes.size()-1];
        cortes.pop_back();
    }
    cout<<cortes.size();
    return 0;
}
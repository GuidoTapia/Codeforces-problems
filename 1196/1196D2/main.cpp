#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <cmath>
#include <climits>
#include <stdlib.h>

using namespace std;
int getMinItemsToChange (vector<long> v, long k){
    int inicio=0;
    int cont=0;
    int malas=0;
    int minMalas=200000;
    for (int i=0; i<v.size(); i++){
        cont+=abs(v[i]);
        if(v[i]<0){
            malas-=v[i];
        }
        while(cont-abs(v[inicio]) >= k){
            int malas_real= malas;
            if(v[inicio]<0 || v[i]<0){
                long malasElim=max(-v[inicio],0l)+max(-v[i],0l);
                malas_real-= min(cont-k,malasElim);
            }
            if(malas_real<minMalas){
                minMalas=malas_real;
            
            cont-=abs(v[inicio]);
            if(v[inicio]<0){
                malas+=v[inicio];
            inicio++;
        if(cont>=k){
    }
    return minMalas;
}
int main() {
    map <char,int> RGB= {{'R',0},{'G',1},{'B',2}};
    long n,k,q;
    string str;
    cin>>q;
    for (int i = 0; i < q; i++){
        vector<long> startsR;
        vector<long> startsG;
        vector<long> startsB;
        cin>>n>>k>>str;
        startsR.push_back(RGB[str[0]]==0?1:-1);
        startsG.push_back(RGB[str[0]]==1?1:-1);
        startsB.push_back(RGB[str[0]]==2?1:-1);
        for(int j = 1; j < n; j++){
            int value = RGB[str[j]];
            if(value==j%3){
                if(startsR.back()>0){
                    startsR.back()++;
                    startsG.back()--;
                    startsB.back()--;
                }else{
                    startsR.push_back(1);
                    if(startsG.back()>0){
                        startsG.push_back(-1);
                        startsB.back()--;
                    }else{
                        startsG.back()--;
                        startsB.push_back(-1);
                    }
                }
            else if(value==(j+1)%3){
                if(startsG.back()>0){
                    startsR.back()--;
                    startsG.back()++;
                    startsG.push_back(1);
                    if(startsR.back()>0){
                        startsR.push_back(-1);
                        startsR.back()--;
            }else{
                if(startsB.back()>0){
                    startsB.back()++;
                    startsB.push_back(1);
    cout<< min(min(getMinItemsToChange(startsR,k),getMinItemsToChange(startsG,k)),getMinItemsToChange(startsB,k))<<endl;

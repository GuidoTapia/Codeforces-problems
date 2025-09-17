#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <cmath>
#include <climits>
using namespace std;
struct tripleta{
    long long x,y,z;
    tripleta(long long a,long long b,long long c){
        x=a;
        y=b;
        z=c;
    }
};
struct op{
    bool operator()(tripleta a, tripleta b){
        return a.y<b.y || a.z>b.z;
int main(){
    long long n,cont,aux;
    cin>>n;
    vector<tripleta> arr(n,tripleta(0,0,0));
    for(int i=0;i<n;++i){
        cin>>arr[i].x;
        cont=0;
        for(aux=arr[i].x; !(aux&1) ;aux=aux>>1){
            ++cont;
        }
        arr[i].y=cont;
        for(aux=arr[i].x; !(aux%3l) ;aux/=3){
        arr[i].z=cont;
    op o;
    sort(arr.begin(),arr.end(), o);
    for(int i=0;i<arr.size();++i){
        cout<<arr[i].x<<' ';
	return 0;
}

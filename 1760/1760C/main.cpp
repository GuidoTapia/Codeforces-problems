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
int main() {
    long long n,t;
    long long arr[200001];
    cin>>t;
    for (int i = 0; i < t; i++){
        long first, second;
        cin>>n;
        cin>>arr[0]>>arr[1];
        if(arr[0] > arr[1]){
            first=0;
            second=1;
        }else{
            first=1;
            second=0;
        }
        for (int j=2; j<n; j++){
            cin>>arr[j];
            if (arr[j]>arr[first]){
                second=first;
                first=j;
            }else if (arr[j]>arr[second]){
                second=j;
            }
        for (int j=0; j<n; j++){
            if (j==first){
                cout<<arr[j]-arr[second]<<" ";
            }else{
                cout<<arr[j]-arr[first]<<" ";
        cout<<endl;
    }
}

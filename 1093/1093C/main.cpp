#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin>>n;
    long long*arr=new long long[n];
    cin>>arr[n-1];
    arr[0]=0;
    for(int i=1; i<n/2;++i){
        cin>>arr[n-i-1];
        arr[i]=arr[i-1];
        arr[n-i-1]-=arr[i];
        if(arr[n-i-1]>arr[n-i]){
            arr[i]+= arr[n-i-1]-arr[n-i];
            arr[n-i-1]=arr[n-i];
        }
    }
    for(int i=0; i<n;++i){
        cout<<arr[i]<<' ';
    }
}
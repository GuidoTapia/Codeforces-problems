#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    long t, n,x;
    cin >> t;
    for (int i = 0; i < t; i++){
        map<long, long long> mp;
        long long count=0;
        cin >> n;
        for (int j = 0; j < n; j++){
            cin >> x;
            if(mp.find(x-j) == mp.end()){
                mp[x-j] = 1;
            } else{
                mp[x-j]++;
            }
        }
        for (auto it = mp.begin(); it != mp.end(); it++){
            count+= it->second*(it->second-1)/2;
        }
        cout<<count<<endl;
    }
}
#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main() {
    long long n;
    map<string, int> mp;
    string key;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> key;
        if(mp.find(key) == mp.end()){
            mp[key] = 1;
            cout<< "OK" << endl;
        } else{
            cout << key << mp[key] << endl;
            mp[key]++;
        }
    }
}

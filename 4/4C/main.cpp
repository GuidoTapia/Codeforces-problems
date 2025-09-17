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

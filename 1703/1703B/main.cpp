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
    int arr[30];
    long long n;
    long len;
    string str;
    long count;
    cin >> n;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < 30; j++){
            arr[j] = 0;
        }
        count = 0;
        cin >> len >> str;
        for (int j = 0; j < len; j++){
            if(arr[str[j] - 'A']){
                count++;
            }else{
                count+=2;
                arr[str[j] - 'A']=1;   
            }
        }
        cout<< count<< endl;
    }
    return 0;
}

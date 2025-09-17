#include <bits/stdc++.h>

using namespace std;

int main() {
	long long t, acc;
	vector<long long> prebase,price;
	acc=1;
	for(int i=0;i<20;i++){
		prebase.insert(prebase.begin(),acc);
		price.insert(price.begin(),acc*3+(long long)i*(acc/3));
		acc*=3;
	}
	
	cin >> t;
	
	while (t--) {
		long long n;
		cin >> n;
		long long sum=0;
		int it=0;
		while (n > 0) {
			if(prebase[it]>n){
				it++;
			}
			else{
				sum+=price[it];
				n-=prebase[it];
			}
		}
		
		cout << sum << endl;
	}
	
	return 0;
}

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
		long long n, k, sum;
		cin >> n>>k;
		vector<int> acc;
		sum=0;
		int it=0;
		int deals=0;
		while (n > 0) {
			if(prebase[it]>n){
				it++;
			}
			else{
				acc.push_back(it);
				n-=prebase[it];
			}
		}
		while(k>=acc.size()+2 && acc[0]<price.size()-1){
			int newIt=acc[0]+1;
			acc[0]=newIt;
			acc.insert(acc.begin(),newIt);
			acc.insert(acc.begin(),newIt);
			sort(acc.begin(),acc.end());
		}
		for(int i =0; i<acc.size(); i++){
			sum+=price[acc[i]];
		}
		cout << (acc.size()<=k?sum:-1) << endl;
	}
	
	return 0;
}

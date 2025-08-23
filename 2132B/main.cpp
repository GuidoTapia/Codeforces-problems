#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		long long n;
		cin >> n;
		
		long long div = 11;
		vector <long long> ans;
		while (n >= div) {
			if (n % div == 0)
				ans.push_back(n / div);
			div =(div-1)*10+1 ;
		}
		
		cout << ans.size() << endl;
		for (int i = (int)ans.size() - 1; i>=0 ; --i)
			cout << ans[i] << ' ';
		cout << endl;
	}
	
	return 0;
}

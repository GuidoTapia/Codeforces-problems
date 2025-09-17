#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <cmath>
#include <climits>

using namespace std;
int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n,m;
		string a, b,c;
		cin >> n>>a>>m>>b>>c;
		
		for (int i=0;i<m;i++) {
			if(c[i]=='V'){
				a.insert (0, 1, b[i]);
			}else{
				a.push_back(b[i]);
			}
		}
		cout << a << endl;
	}
	return 0;
}

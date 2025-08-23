#include <iostream>

using namespace std;

int main()
{
	int result=0;
	string str1,str2;
	cin>>str1>>str2;
	for (int i=0; i< str1.length();++i){
		int chr1 = str1[i] >= 'a' ? str1[i]-'a' : str1[i]-'A';
		int chr2 = str2[i] >= 'a' ? str2[i]-'a' : str2[i]-'A';
		if(chr1>chr2){
			result = 1;
			break;
		}else if(chr2>chr1){
			result = -1;
			break;
		} 
	}
	cout<<result;
    return 0;
}

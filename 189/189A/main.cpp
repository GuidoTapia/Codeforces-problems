#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int>dp (4000+n+1,-1);
    dp[4000+min(min(a,b),c)]=1;
    dp[4000]=0;
    for(int i=4000+min(min(a,b),c)+1;i<=4000+n;++i){
        dp[i]=max(max(dp[i-a],dp[i-b]),dp[i-c]);
        if(dp[i]!=-1)
            dp[i]++;
    }
    cout << dp[n+4000] << endl;
    return 0;
}
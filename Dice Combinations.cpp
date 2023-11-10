#include <bits/stdc++.h>
#define ll long long
using namespace std;
const unsigned int MOD= 1000000007;

void solve(){
	int n;
	cin>>n;
	vector<int>dp(n+1);

	//base case
	dp[0]=1;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i>=j){
				dp[i]=(dp[i]+dp[i-j])%MOD;
			}
			
		}
	}
	
	cout<<dp[n]<<endl;

	
	
}

int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output3.txt", "w", stdout);

#endif 
	solve();
	
	
}

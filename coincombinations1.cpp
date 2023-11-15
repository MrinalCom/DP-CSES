#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

void again(int n,int x,vector<int>arr){

	vector<int>dp(x+1,0);
	
	dp[0]=1;
	for(int i=1;i<=x;i++){
		//finding dp[x]
		for(int j=0;j<n;j++){
			if(arr[j]<=i){
				dp[i]=(dp[i]+dp[i-arr[j]])%MOD;
				
			}
		}
	}
	cout<<dp[x]<<endl;
	

}



void solve(){
	int n,x;
	cin>>n>>x;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	again(n,x,arr);
	
}







int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output3.txt", "w", stdout);

#endif 
	solve();
}
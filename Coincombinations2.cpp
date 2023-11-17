#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        vector<vector<int>>dp(n+1,vector<int>(x+1));
        // dp[i][k] = number of ways to construct sum k
        // such that all coins before coin[i] are unusable
        for(int i=0;i<n;i++){
              dp[i][0]=1;
        }
            for(int i = n - 1; i >= 0; i--){
        for(int sum = 1; sum <= x; sum++){
            int skipping = dp[i + 1][sum];
            int picking = 0;
            if(arr[i] <= sum){
                picking = dp[i][sum - arr[i]];
            }
            dp[i][sum] = (skipping + picking) % MOD;
            }
        }

        cout<<dp[0][x]<<endl;

}

int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output3.txt", "w", stdout);

#endif 

    
    solve();




}
    
    

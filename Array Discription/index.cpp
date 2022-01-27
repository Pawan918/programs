#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<ll>> dp(n,vector<ll> (m+1,0));
    //checking the initial condition.
    if(arr[0]!=0){
        dp[0][arr[0]] = 1;
    }else{
        for(int i=1;i<=m;i++){
            dp[0][i] = 1;
        }
    }
    //checking other condition
    for(int i=1;i<n;i++){
        if(arr[i]==0){
            //checking all possiblity if value is 0.
            for(int j=1;j<=m;j++){
                if(j-1>=1)
                    dp[i][j] = (dp[i][j] + dp[i-1][j-1])%mod;
                dp[i][j] = (dp[i][j] + dp[i-1][j])%mod;
                if(j+1<=m)
                    dp[i][j] = (dp[i][j] + dp[i-1][j+1])%mod;
            }
        }else{
            // checking only possiblity if its value is not 0.
            if(arr[i]-1>=1)
                dp[i][arr[i]] = (dp[i][arr[i]] + dp[i-1][arr[i]-1])%mod;
            dp[i][arr[i]] = (dp[i][arr[i]] + dp[i-1][arr[i]])%mod;
            if(arr[i]+1<=m)
                dp[i][arr[i]] = (dp[i][arr[i]] + dp[i-1][arr[i]+1])%mod;
        }
    }
    ll total=0;
    for(int i=1;i<=m;i++){
        total = (total + dp[n-1][i])%mod;
    }
    cout<<total;
    return 0;
}
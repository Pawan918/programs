#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int main(){
    int n;
    cin>>n;
    ll sum = (n*(n+1))/2;
    if(sum%2!=0){
        cout<< 0;
        return 0;
    }
    sum = sum/2;
    vector<ll> dp(sum+1,0);
    dp[0] = 1;
    for(ll i=1;i<=n;i++){
        for(ll j=sum;j>=i;j--){
            dp[j] = (dp[j] + dp[j-i])%mod;
        }
    }
    if(dp[sum]%2 == 1)
        dp[sum] += mod;
    cout<<dp[sum]/2;
    return 0;
}
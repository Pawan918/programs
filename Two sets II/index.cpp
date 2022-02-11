#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int main(){
    int n;
    cin>>n;
    ll sum = (n*(n+1))/2;
    vector<int> dp(sum+1,0);
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(j-i>=0){
                dp[j] = (dp[j-i] + dp[i])%mod;
            }
        }
    }
    cout<<dp[sum]/2;
    return 0;
}
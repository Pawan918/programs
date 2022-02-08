
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> coins(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>coins[i];
        sum += coins[i];
    }
    vector<int> dp(sum+1,0);
    dp[0] = 1;
    for(int i=0;i<n;i++){
        for(int j=sum;j>=coins[i];j--){
            if(j-coins[i] >= 0){
                dp[j] |= dp[j-coins[i]];
            }
        }
    }
    vector<int> ans;
    for(int i=1;i<=sum;i++){
        if(dp[i]){
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

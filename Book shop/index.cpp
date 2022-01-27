#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> books(n);
    for(int i=0;i<n;i++){
         cin>>books[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>books[i].second;
    }
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            if(j<books[i-1].first){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = max(dp[i-1][j],(books[i-1].second + dp[i-1][j-books[i-1].first]));
            }
        }
    }
    cout<<dp[n][x];
    return 0;
}

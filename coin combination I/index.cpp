#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    vector<ll> times(x+1,0);
    times[0] = 1;
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    for(int i=0;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i-coins[j] >= 0){
                times[i] = (times[i]+times[i-coins[j]])%mod;
            }
        }
    }
    cout<<times[x];
    return 0;
}

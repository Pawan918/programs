#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    vector<ll> value(x+1,0);
    value[0] = 1;
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=x;j++){
            if(j-coins[i] >= 0){
                value[j] = (value[j] + value[j-coins[i]])%mod;
            }
        }
    }
    cout<<value[x];
    return 0;
}
#include<bits/stdc++.h>
typedef long long ll;
const int mod = 1e9+7;
using namespace std;

int dice(int n,vector<ll> combination){
    if(n<0) return 0;
    if(n==0) return combination[0];
    if(combination[n] != -1) return combination[n];
    for(int i=1;i<=6;i++){
        combination[i] = dice(n-i,combination)%mod;
    }
    return combination[n];
}
int main(){
    int n;
    cin>>n;
    vector<ll> combinations(n+1,-1);
    combinations[0]=1;
    ll m = dice(n,combinations);
    cout<<m;
    return 0;
}
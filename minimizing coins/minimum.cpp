#include<bits/stdc++.h>
#define  INF 1e9
typedef long long ll;

using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    vector<int> value(x+1,INF);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    value[0]=0;
    for(int i=0;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i-coins[j] >= 0)
            value[i] = min(value[i],value[i-coins[j]]+1);
        }
    }
    if(value[x] == INF){
        cout<<-1;
    } 
    else cout<<value[x];
    return 0;
}
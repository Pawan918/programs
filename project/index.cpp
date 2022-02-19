#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
// bool cmp(pair<int,pair<int,int>> a,pair<int,pair<int,int>> b){
//     if(a.first > b.first)
//         return false;
//     else if(a.first == b.first){
//         if(a.second.first < b.second.first) return true;
//         else if(a.second.first == b.second.first) 
//             return a.second.second > b.second.second ? true:false;
//     }
//     return true;
// }
int main(){
    int n;
    cin>>n;
    vector<tuple<ll,ll,ll>> arr(n);
    map<ll,ll> m;
    for(int i=0;i<n;i++){
        ll start ,end,reward;
        cin>>start>>end>>reward;
        arr[i] = {end, start,reward};
    }
    sort(arr.begin(),arr.end());
    m[0] = 0;
    ll bestTotalReward = 0;
    for(int i=0;i<n;i++){ 
        ll start ,end,reward;
        end = get<0>(arr[i]);
        start = get<1>(arr[i]);
        reward = get<2>(arr[i]);
        auto it  = m.lower_bound(start);
        it--;
        ll totalReward = it->second + reward;
        bestTotalReward = max(bestTotalReward,totalReward);
        m[end] = bestTotalReward;
    }
    cout<<bestTotalReward;
    return 0;
}
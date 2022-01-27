#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool cmp(pair<int,int> &a,pair<int,int> &b){
    return a.second < b.second;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> watch(n);
    for(int i=0;i<n;i++){
        cin>>watch[i].first>>watch[i].second;
    }
    sort(watch.begin(),watch.end(),cmp);
    set<pair<int,int>> available;
    int cnt =0;
    for(int i=0;i<n;i++){
        if(available.size()==0){
            available.insert({watch[i].second*-1,i});
        }else{
            auto t=available.lower_bound({watch[i].first*-1,-1});
            if(t!=available.end()){
                available.erase(t);
                available.insert({watch[i].second*-1,i});
            }else if(t==available.end()&&available.size()<k){
                available.insert({watch[i].second*-1,i});
            }else cnt++;
        }
    }
    cout<<n-cnt;
    return 0;
}
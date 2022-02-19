#include<bits/stdc++.h>
#define  INF 1e9
typedef long long ll;

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    ans.push_back(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i] > ans.back())  ans.push_back(arr[i]);
        else{
            auto id = lower_bound(ans.begin(),ans.end(),arr[i])-ans.begin();
            ans[id] = arr[i];
        }
    }
    cout<<ans.size();
    return 0;
}
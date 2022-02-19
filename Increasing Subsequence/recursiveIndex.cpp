#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans(n,0);
    for(int i=0;i<n;i++){
        ans[i] = 1;
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]) ans[i] = max(ans[i],ans[j]+1);
        }
    }
    cout<<ans[n-1];
    return 0;
}
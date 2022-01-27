#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int n,mini,maxi;
    cin>>n>>mini>>maxi;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll maxsum = 0;
    ll sum =0;
    int i=0;
    int j=0;
    while(j<mini){
        sum += v[j];
        j++;
    }
    maxsum = max(maxsum,sum);
    while(j<n){
        if(j-i < maxi){
            sum += v[j];
            j++;
        }else{
            sum -= abs(v[i]);
            i++;
        }
        maxsum = max(sum,maxsum);
    }
    cout<<maxsum;
    return 0;
}
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int n,weight;
    cin>>n>>weight;
    vector<int> elevator(n);
    for(int i=0;i<n;i++)
        cin>>elevator[i];
    sort(elevator.begin(),elevator.end());
    vector<int> s;
    s.push_back(weight-elevator[n-1]);
    for(int i=n-2;i>=0;i--){
        auto it = lower_bound(s.begin(),s.end(),elevator[i])-s.begin();
        if(it < s.size()){
            s[it] = s[it] -elevator[i];
        }else{
            s.push_back(weight-elevator[i]);
        }
        sort(s.begin(),s.end());
    }
    cout<<s.size();
    return 0;
}
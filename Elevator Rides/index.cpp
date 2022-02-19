#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int n,weight;
    cin>>n>>weight;
    vector<int> elevator(n);
    for(int i=0;i<n;i++)
        cin>>elevator[i];

    vector<int> s;
    s.push_back(elevator[0]);
    for(int i=1;i<n;i++){
        int find = weight-elevator[i];
        auto it = upper_bound(s.begin(),s.end(),find);
        if(*it >= s.size()){
            s.push_back(elevator[i]);
        }else{
            s[*it] += elevator[i];
        }
    }
    cout<<s.size();
    return 0;
}
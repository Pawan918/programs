#include<bits/stdc++.h>
#define INF 1e9
typedef long long ll;
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> digit(n+1,INF);
    digit[0] = 0;
    for(int i=1;i<=n;i++){
        int tempvalue = i;
        while(tempvalue > 0){
             digit[i] = min(digit[i],digit[i-tempvalue%10]+1);
             tempvalue =tempvalue/10;
        }
       
    }
    cout<<digit[n];
    return 0;
}
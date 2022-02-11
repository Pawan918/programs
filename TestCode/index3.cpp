#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int M;
    cin>>M;
    for(int i=0;i<n;i++){
        if(v[i]==-1 && M<=0){
            sum = -1;
            break;
        }
    }
}
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int main(){
    int n;
    cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<ll>> arr1(n,vector<ll>(n,0));
    arr1[0][0]=(arr[0][0] == '.');
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] != '*'){
                if(j-1>=0 && arr[i][j-1] != '*')
                    arr1[i][j] = (arr1[i][j]+arr1[i][j-1])%mod;
                if(i-1>=0 && arr[i-1][j]!='*')
                    arr1[i][j] = (arr1[i][j]+ arr1[i-1][j])%mod;
            }
        }
    }
    cout<<arr1[n-1][n-1];
    return 0;
}
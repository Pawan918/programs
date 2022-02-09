#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll dp[n][n];
    for(int l=n-1;l>=0;l--){
    	for(int h=l;h<n;h++){
    		if(l==h)dp[l][h]=a[l];
    		else{
    			dp[l][h]=max(a[l]-dp[l+1][h], a[h]-dp[l][h-1]);
			}
		}
	}
	ll total=0;
	for(int i=0;i<n;i++)
	    total+=a[i];
	cout<<(dp[0][n-1]+total)/2<<endl;
return 0;
}

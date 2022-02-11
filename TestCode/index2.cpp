#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int p, int r, int num) {
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
         return 1;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r, num);
   }
   return 0;
}
int main(){
    int N,K;
    cin>>N>>K;
    vector<int> arr(N);
     for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int count =  0;
    for(int i=0;i<N;i++){
        int left = binarySearch(arr,arr[0],arr[N-1],arr[i]-K);
        int right =binarySearch(arr,arr[0],arr[N-1],arr[i]+K);
        if(left || right) count++;
    }
    cout<<count;
}
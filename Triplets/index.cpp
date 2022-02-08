#include<bits/stdc++.h>
using namespace std;


int solution(int A[],int N){
    sort(A,A+N);
    int count =0;
    for(int i=0;i<N-2;i++){
        for(int j=i+1;j<N-1;j++){
            for(int k=j+1;k<N;k++){
                if(A[i]+A[j]>A[k]){
                    count++;
                }else{
                    break;
                }
            }
        }
    }
    return count;
}
int main(){
    int A[]={10,2,5,1,8,12};
    int size = sizeof(A)/sizeof(A[0]);
    int count = solution(A,size);
    cout<<count;
}
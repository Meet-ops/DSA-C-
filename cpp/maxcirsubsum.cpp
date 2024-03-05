#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n){
    int a=0;
    int b=-10000000;
    for(int i=0; i<n; i++){
        a+=arr[i];
        if(a<0){
            a=0;
        }
        b=max(a,b);
    }
    return b;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sak;
    int na=kadane(arr,n);
    int sa=0;
    for(int i=0; i<n; i++){
        sa+=arr[i];
        arr[i]=-arr[i];
    }
    sak = sa + kadane(arr,n);
    cout<<max(sak,na);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int a=0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==k){
                cout<<"yes it exist";
                a=1;
            }
        }
    }
    if(a==0){
                cout<<"does not exist";
            }
    
    return 0;
}

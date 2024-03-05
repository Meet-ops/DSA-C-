#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        ar[i]=1;
    }
    int k = 0;
    for(int j=0; j<n; j++){
        k=arr[j];
        ar[k]=0;
    }
    for(int i=0; i<n; i++){
        if(ar[i]==1){
            cout<<i;
            break;
        }
    }
    
    return 0;
}
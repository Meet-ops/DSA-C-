#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int a=arr[0],b=arr[n-1];

    for(int i=0; i<n; i++){
        if((a+b)>k){
            b--;
        }else if((a+b)<k){
            a++;
        }else{
            cout<<a<<" "<<b;
            break;
        }
    }
    return 0;
}

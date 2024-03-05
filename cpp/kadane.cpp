#include <bits/stdc++.h>
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x=0;
    int y=INT_MIN;
    for(int i=0; i<n; i++){
        x+=arr[i];
        if(x<0){
            x=0;
        }
        y=max(x,y);
    }

    cout<<y;

    return 0;
}
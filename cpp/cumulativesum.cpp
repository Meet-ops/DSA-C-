#include <bits/stdc++.h>
#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ary[n+1];
    ary[0] = 0;
    for(int i=1; i<=n; i++){
        ary[i]=ary[i-1] + arr[i-1];
    }

    int x=INT_MIN;
    for(int i=1; i<=n; i++){
        int y=0;
        for(int j=0; j<i; j++){
            y=ary[i]-ary[j];
            x=max(x,y);
        }
    }

    cout<<x;


    return 0;
}
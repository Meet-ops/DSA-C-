#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <limits.h>
#include <math.h>


int main() {
    int n,s;
    cin>>n>>s;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1; i<n; i++){
        int sum = 0;
        int j=0;
        for(j=i; j<n; j++){
            sum+=arr[j-1];
            if(sum==s)break;
        }
        if(sum==s)cout<<i<<" "<<j;
    }
    return 0;
}
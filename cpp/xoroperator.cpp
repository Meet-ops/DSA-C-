#include <bits/stdc++.h>
using namespace std;

int unique(int arr[],int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int main (){
    int arr[] = {99,58,99,58,36,7,36};
    cout << unique(arr,7);
    return 0;
}
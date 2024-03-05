#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int r_st=0, r_end=n-1, c_st=0, c_end=m-1;

    while(c_st<=c_end && r_st<=r_end){
        for(int i=c_st; i<=c_end; i++){
            cout<<arr[c_st][i];
        }
        r_st++;
        for(int i=r_st; i<=r_end; i++){
            cout<<arr[i][c_end];
        }
        c_end--;
        for(int i=c_end; i>=c_st; i--){
            cout<<arr[r_end][i];
        }
        r_end--;
        for(int i=r_end; i>=r_st; i--){
            cout<<arr[i][r_st];
        }
        c_st++;
    }
    return 0;
}
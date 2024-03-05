#include<bits/stdc++.h>
using namespace std;

int sq(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }

    return sq(n,i+1,j)+sq(n,i,j+1);
}

int main(){
    cout<<sq(3,0,0);
    return 0;
}
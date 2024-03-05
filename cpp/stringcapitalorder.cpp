#include<bits/stdc++.h>
using namespace std;

int main(){
    string st = "meet";
    for(int i=0; i<st.length(); i++){
        st[i]-=32;
    }
    cout<<st;
    return 0;
}
#include<bits/stdc++.h>
#include<string>
using namespace std;

void exchange(string s){
    if(s.length()==0){
        return;
    }
    string pro;
    if(s[0]=='p' && s[1]=='i'){
        pro = s.substr(2);
        cout<<3.14;
    }
    else {
        pro = s.substr(1);
        cout<<s[0];
    }
    exchange(pro);
}

int main(){
    exchange("pippxxppiixipi");
    return 0;
}
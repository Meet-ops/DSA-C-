#include<bits/stdc++.h>
using namespace std;
#include<string> 

void Subset(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    Subset(ros,ans);
    Subset(ros,ans+ch);
}

int main(){
    Subset("ABC","");
    return 0;
}
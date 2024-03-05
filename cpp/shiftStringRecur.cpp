#include<bits/stdc++.h>
using namespace std;
#include<string>


string exchange(char ele,string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string sub=exchange(ele,s.substr(1));
    
    if(ch==ele){
        s=sub+ch;
    }
    else{
        s=ch+sub;
    }
    return s;
}

int main(){
    string apple = exchange('x',"axxbdxcefxhix");
    cout<<apple;
    return 0;
}
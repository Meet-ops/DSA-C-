#include<bits/stdc++.h>
using namespace std;

string keypad[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void nokia(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string sub = keypad[ch-'0'];
    string ros = s.substr(1);

    for(int i=0; i<sub.length();i++){
        nokia(ros, ans + sub[i]);
    }
    
}

int main(){
    nokia("23","");
    return 0;
}
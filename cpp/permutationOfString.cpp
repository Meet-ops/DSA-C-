#include<bits/stdc++.h>
using namespace std;

void permute(string a,string b){
    if(a.length()==0){
        cout<<b<<endl;
        return;
    }

    for(int i=0; i<a.length(); i++){
        char ch=a[i];
        string ros=a.substr(0,i)+a.substr(i+1);

        permute(ros,b+ch);
    }
}

int main(){
    permute("ABC","");
    return 0;
}
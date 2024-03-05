#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1="13425";
    for(int i=0;i<s1.size(); i++){
        for(int k=i+1; k<s1.size(); k++){
            if(s1[i]<s1[k]){
                int t=s1[i];
                s1[i]=s1[k];
                s1[k]=t;
            }
        }
    }
    cout<<s1;
    return 0;
}
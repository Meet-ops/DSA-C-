#include<bits/stdc++.h>
using namespace std;

void towerofHanoi(int n,char scr,char dest,char helper){
    if(n==0){
        return;
    }

    towerofHanoi(n-1,scr,helper,dest);
    cout<<"move from "<<scr<<"to "<<dest<<endl;
    towerofHanoi(n-1,helper,dest,scr);
}

int main(){
    int n;
    cin>>n;
    towerofHanoi(n,'A','C','B');
    return 0;
}
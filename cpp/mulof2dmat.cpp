#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][4]={{1,2,3,1},{1,4,5,6},{1,7,8,9}};
    int nrr[4][3]={{1,2,3},{4,5,6},{7,8,9},{1,2,3}};
    int t;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int p=0;
            for(int k=0; k<4; k++){
                t=arr[i][k]*nrr[k][j];
                p+=t;
            }
            cout<<p<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
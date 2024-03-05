#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int y=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i;j<n;j++){
            int x=0;
            for(int k=i; k<=j; k++){
                cout<<arr[k];
                x+=arr[k];
            }
            y = max(x,y);
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<y;
    return 0;
}
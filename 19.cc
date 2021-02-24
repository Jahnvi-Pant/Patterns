#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    for(int i=2;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}

// 6
// 1
// 21
// 321
// 4321
// 54321
// 4321
// 321
// 21
// 1
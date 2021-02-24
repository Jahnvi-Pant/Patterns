#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        for(int j=n-i-1;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}

// 6
//  123454321
//   1234321
//    12321
//     121
//      1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<n-i;j++){
            cout<<j;
        }

        cout<<"\n";
    }
}

// 6
//     1
//    12
//   123
//  1234
// 12345
//  1234
//   123
//    12
//     1
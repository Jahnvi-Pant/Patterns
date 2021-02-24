#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=2*(i-1);j++){
            cout<<j+1;
        }
        cout<<"\n";
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*(n-i)-1;j++){
            cout<<j+1;
        }
        cout<<"\n";
    }
    return 0;
}


// 5
     
//     1
//    123
//   12345
//  1234567
// 123456789
//  1234567
//   12345
//    123
//     1
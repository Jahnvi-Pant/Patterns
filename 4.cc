#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<"\n";
    }
    return 0;
}

// 5
//     1
//    12
//   123
//  1234
// 12345
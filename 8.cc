#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<j+1;
        }
        cout<<"\n";
    }
 return 0;
}

// 5
// 12345
//  1234
//   123
//    12
//     1
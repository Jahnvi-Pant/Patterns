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
            if(j%2==0){
                cout<<" "; 
            }
            else{
                cout<<"*";
            }
        }
         for(int j=i-1;j>=1;j--){
            if(j%2==0){
                cout<<" "; 
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}

// 5
//    *
//   * *
//  * * *
// * * * *
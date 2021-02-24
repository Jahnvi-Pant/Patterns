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
              if(j%2!=0){
                cout<<" "; 
            }
            else{
                cout<<j+1;
            }
        }
        cout<<"\n";
    }
    return 0;
}

// 5

//     1
//    1 3
//   1 3 5
//  1 3 5 7
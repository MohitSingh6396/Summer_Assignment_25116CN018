#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     for(int i=1;i<=n;i++){
        if(i==1||i==n){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    else {
    for(int i=1;i<=n;i++){
        if(i==1||i==n){
            cout<<"*";
        }
        else if(i>1||i<n){
            cout<<" ";
        }
    }
        cout<<endl;
}}
    return 0;
}
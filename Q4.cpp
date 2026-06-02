#include<bits/stdc++.h>
using namespace std;
int countofdigit(int n){
    int cnt=0;
    while(n>0){
       int lastdigit=n%10;
        cnt=cnt+1;
        n=n/10; 
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    countofdigit(n);
    cout<< countofdigit(n)<<endl;
    return 0;
}
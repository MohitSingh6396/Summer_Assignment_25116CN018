#include<bits/stdc++.h>
using namespace std;
int productofdigit(int n){
    int product=1;
    while(n>0){
       int lastdigit=n%10;
        product=product*lastdigit;
        n=n/10; 
    }
    return product;
}
int main(){
    int n;
    cin>>n;
    productofdigit(n);
    cout<< productofdigit(n)<<endl;
    return 0;

}
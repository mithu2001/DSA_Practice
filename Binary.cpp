#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    //Decimal to binary
     int ans = 0;
     int i=0;
    //  while(n!=0){
    //     int bit = n & 1;
    //     ans = (bit*pow(10,i))+ans;
    //     n = n>>1;
    //     i++;
    //  }
    // cout<<ans;
    //Binary to Decimal

    while(n!=0){
        int digit = n%10;
        if(digit==1)
        ans = ans + pow(2,i);
        n = n/10;
        i++;
     }
    cout<<ans;

    //Count bits

    return 0;
}
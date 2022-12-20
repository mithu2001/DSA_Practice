#include<bits/stdc++.h>
using namespace std;

#define PI 3.14 //create a macros

inline int getMax(int& a, int& b){
    return (a>b)?a:b;
}

int main(){
    int r =5;
    double area = PI*r*r;
    cout<<area<<endl;

    int a =1,b=2;
    int ans = 0;
    ans  = getMax(a,b);
    cout<<ans<<endl;
    a++;
    b = b+2;
    ans = getMax(a,b);
    cout<<ans<<endl;

    return 0;
}
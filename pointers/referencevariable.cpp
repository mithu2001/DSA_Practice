#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 5;

    //create a refernce variable

    int & j = i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;

    return 0;
}
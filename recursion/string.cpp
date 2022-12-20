#include<bits/stdc++.h>
using namespace std;


void reverse(string& str, int s, int e){
    // cout<<"call recieve for "<<str<<endl;
     if(s>e)
        return;
    swap(str[s], str[e]);
    s++;
    e--;
    reverse(str,s,e);
}

int main(){
    string str = "abcde";
    int size = str.length();
    int i = 0, j = size-1;

    reverse(str,i,j);
    // cout<<endl;
    cout<<str<<endl;
    // cout<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool checkOneStringIsrotationOfanother(string str1, string str2){
    
    int l1 = str1.length();
    int l2 = str2.length();
    if(l1!=l2) return false;
    else{
        string str3 = str1 + str2;
        if(str3.find(str2)!= string::npos)
          return true;
        else
          return false;
    }
}

int main(){
    string str1 = "ABCD";
    string str2 = "CDAB";


    cout<<checkOneStringIsrotationOfanother(str1, str2);

    return 0;
}
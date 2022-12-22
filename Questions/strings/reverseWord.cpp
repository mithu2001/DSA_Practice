#include<bits/stdc++.h>
using namespace std;

//brute force approach
string reverseWord(string str){
    string ans = "";
    string temp = "";
    for(int i = str.length()-1; i>=0; i--){
            if(str[i]==' '){
                reverse(temp.begin(), temp.end());
                ans = ans + temp;
                ans.push_back(' ');
                temp = "";
            }
            else{
                temp.push_back(str[i]);
            }
    }
    reverse(temp.begin(), temp.end());
    ans = ans + temp;
    return ans;

}

int main(){
    string str =  "I LOVE YOU";
    cout<<reverseWord(str)<<endl;

    return 0;
}
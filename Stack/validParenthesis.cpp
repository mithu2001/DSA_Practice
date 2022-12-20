#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string str){
   stack<char>st;

    for(int i =0; i<str.length(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '['){
         st.push(ch);
        }
        else{
            if(!st.empty()){
                char topele = st.top();
                if((ch == ')' && topele == '(') ||
                 (ch == '}' && topele == '{') ||
                 (ch == ']' && topele == '[')){
                    st.pop();
                 }
                 else{
                    return false;
                 }
            }
            else{
                return false;
            }

        }
    }
    if(st.empty())
       return true;
    else
       return false;
}

int main(){
    string str = "[()]{}{[()()]()";
    
    cout<<isValidParenthesis(str);
    return 0;
}
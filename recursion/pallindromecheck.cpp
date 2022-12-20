#include<bits/stdc++.h>
using namespace std;

bool checkPallindrome(string& str, int s, int e){
    //base case
    if(s>e)
     return true;;
    if(str[s]!=str[e]){
        return false;
    }
    else{
       return checkPallindrome(str, s+1, e-1);
    }
}

int calculatePower(int a, int b){
    //base case
    if(b==0)
       return 1;
    if(b==1)
       return a;

    //Recursive call
    int ans = calculatePower(a, b/2);

    if(b%2 == 0){
        //if b is even
        return ans*ans;
    }
    else{
        //if b is odd
        return a * ans * ans;
    }
     
    
}


int main(){

    // string str = "1211";
    // int len = str.length();
    // bool ans = checkPallindrome(str, 0, len-1);
    // if(ans)
    //  cout<<"it is Pallindrome "<<endl;
    // else 
    //  cout<<"it is not a Pallindrome "<<endl;
    
    int a, b;
    cin>>a>>b;
    int ans = calculatePower(a,b);
    cout<<"Answer is "<<ans<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
      return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(char arr[], int n){
   int start = 0, end = n-1;
    while(start<end){
        if(toLowerCase(arr[start])!=toLowerCase(arr[end]))
            return false;
        else{       
        start++;       
        end--;
       }
    }
    return true;
}

void reverse(char arr[], int n){
    int start =0, end =n-1;
    while (start<end)
    {
        swap(arr[start++],arr[end--]);
    }
    
}


int getLength(char arr[]){
    int count =0;
    for(int i=0; arr[i]!='\0'; i++){
       count++;
    }
return count;
}

int main(){
    char arr[20];
    cout<<"Enter character array "<<endl;
    cin>>arr;

    cout<<"Your character array is: "<<arr<<endl;
    int len =getLength(arr);
    cout<<"Lenght of char Array  is: "<<len;

    cout<<"\nReversed string ";
    reverse(arr,len);
    cout<<arr<<endl;
    
    cout<<"Palindrome or Not: "<<checkPalindrome(arr,len);

    cout<<"\nCharacter "<<toLowerCase('b')<<endl;
    cout<<"Character "<<toLowerCase('D')<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void print( int *p){
    cout<<*p<<endl;
}

void update(int *p){
    // p = p+1;
    // cout<<p<<endl;
    *p = *p+1;
    
}

int getSum(int arr[] , int n){ //here int arr[] = int *arr
    int sum =0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    // char ch[6] = "abcde";

    // cout<<arr<<endl;                                                         

    // cout<<ch<<endl;
    
    // char *c = &ch[0];
    //prints entire string
    // cout<<c<<endl;
    int value =5;
    int *p = &value;
    // print(p);
    cout<<*p<<endl;
    update(p);

    cout<<*p<<endl;

    cout<<getSum(arr,5)<<endl;

    return 0;
}
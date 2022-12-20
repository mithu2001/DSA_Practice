#include<bits/stdc++.h>
using namespace std;

int factorial(int n){

//base case
if(n==0)
   return 1;

// int chhotiproblem = factorial(n-1);
// int baadiproblem = n*chhotiproblem;
// return baadiproblem;
return n*factorial(n-1);

}

int power(int n){
    if(n==0)
    return 1;

    return 2*power(n-1);
}

//tail recursion
void printCounting(int n){
    if(n == 0)
     return;

    cout<<n<<endl;
    printCounting(n-1); 
}

//head recursion
void printTable(int n){
    if(n == 0)
     return;    
    printTable(n-1);
    cout<<2*n<<endl; 
}

int main(){
    int n;
    cin>>n;

    cout<<"factorial of "<<n<<" is "<<factorial(n)<<endl;
    cout<<"Power of 2 to the power "<<n<<" is "<<power(n)<<endl;
    printCounting(n);
    cout<<endl;
    printTable(n);

    return 0;
}
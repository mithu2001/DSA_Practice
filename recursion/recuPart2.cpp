#include<bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest){
     
     cout<<"source "<<src<<" destination "<<dest<<endl;
    //base case
    if(src==dest){
        cout<<"phuch gya"<<endl;
        return;
    }

    //recursive call
    reachHome(src+1, dest);

}

int fibonacciSeries(int n){
    //base case
    if(n==1)
      return 1;
    if(n==0)
    return 0;  

     return fibonacciSeries(n-1) + fibonacciSeries(n-2); 

}

//Ways to reach climbing stair
int countDistinctWays(int nStairs) {
    //  Write your code here.
    if(nStairs<0)
        return 0;
    if(nStairs==0)
        return 1;
    
    int res = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
    return res;
}

void sayDigit(int n, string arr[]){
     if(n==0)
      return;
     //processing
     int digit = n%10; 
     n=n/10;
     
 /*    
    
    if(digit==1)
       cout<<"One"<<endl;
    if(digit==2)
       cout<<"Two"<<endl;
    if(digit==3)
       cout<<"Three"<<endl;
    if(digit==4)
       cout<<"Four"<<endl;
    if(digit==5)
       cout<<"Five"<<endl;
    if(digit==6)
       cout<<"Six"<<endl;
    if(digit==7)
       cout<<"Seven"<<endl;
    if(digit==8)
       cout<<"Eight"<<endl;
    if(digit==9)
       cout<<"Nine"<<endl;
 */      
    // cout<<digit<<endl;

    //recursive
    sayDigit(n, arr);
    cout<<arr[digit]<<endl;
}

int main(){
    int dest = 10;
    int src = 1;

    // reachHome(src,dest);
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"}; 
    int n;
    cin>>n;

    // cout<<fibonacciSeries(n);
    // cout<<countDistinctWays(n);
    sayDigit(n,arr);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
    //Check whether it is a prime Number or not
    //time O(n)
bool isPrime(int n){
   if(n<=1)
   return false;

for(int i=2; i<n; i++){
    if(n%i==0)
    return false;
}
return true;
}

//Count prime number from 2 to n
int countPrimes(int n) {
        int count =0;
        for(int i=2; i<n; i++){
            if(isPrime(i)){
                count++;
            }
        }
        return count;
}

//Count prime number from 2 to n
//Sieve of Erathanes algorithm
 int countPrimes(int n) {
        vector<bool>prime(n+1, true);
        prime[0]=prime[1]=false;
        int count =0;
        for(int i=2; i<n; i++){
            if(prime[i]){
                count++;
                for(int j=2*i; j<n; j=j+i){
                    prime[j]=0;
                }
            }
        }
        return count;
    }


int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"It is a prime number"<<endl;
    }
    else{
        cout<<"It is not a prime number"<<endl;
    }

    return 0;
}
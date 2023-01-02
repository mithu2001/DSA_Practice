#include<bits/stdc++.h>
using namespace std;

int firstNegativeNumber(int arr[], int n, int k){
    for(int i=0; i<=n-k+1; i++){
        for(int j=i; j<k; j++){
           if(arr[j]<0)
             cout<<arr[j]<<endl;
        }
        k++;
    }
}

int main(){
    int arr[6] = {2,3,-4,5,-1,-2}; 
     int windowsize = 3;
    cout<<firstNegativeNumber(arr,6,windowsize)<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

//brute force Approach
int maxSubarraySum(int arr[], int n, int k){
    
    int sum = 0;
    int maxi = INT_MIN;
    for(int i =0; i<=n-k; i++){
        sum = 0;
        for(int j = i; j<i+k; j++){
            sum+=arr[j];
        }
        if(sum>maxi)
           maxi = sum;
        // cout<<sum<<endl;
    }
    //  cout<<endl;
    return maxi;
}
int minSubarraySum(int arr[], int n, int k){
    
    int sum = 0;
    int mini = INT_MAX;
    for(int i =0; i<=n-k; i++){
        sum = 0;
        for(int j = i; j<i+k; j++){
            sum+=arr[j];
        }
        if(sum<mini)
           mini = sum;
        // cout<<sum<<endl;
    }
    //  cout<<endl;
    return mini;
}


//Optimized Approach

int main(){
    int arr[6] = {3,5,2,9,0,6};
    int windowSize = 3;
    cout<<"Maximum Sum is : "<<maxSubarraySum(arr,6,windowSize)<<endl;
    cout<<"Minimum Sum is : "<<minSubarraySum(arr,6,windowSize)<<endl;

    return 0;
}
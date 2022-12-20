#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){

 for(int i =0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
 }  
 
}

void print(int ans[], int n){
  for(int i =0; i<n; i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;
}

int main(){
   
   int arr[5] = {12,5,7,3,8};

    bubbleSort(arr,5);
    cout<<"Sorted Array Using bubble Sort"<<endl;
    print(arr,5);
    return 0;
}
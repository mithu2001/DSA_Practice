#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
   
 for(int i=0; i<n-1; i++){
    int min = i;
    for(int j=i+1; j<n; j++){
     if(arr[j]<arr[min]){
        min=j;
     }
    }
    swap(arr[min],arr[i]);
 }

}

void print(int ans[], int n){
  for(int i =0; i<n; i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;
}

int main(){
   
   int arr[5] = {2,5,1,3,8};

    selectionSort(arr,5);
    cout<<"Sorted Array Using Selection Sort"<<endl;
    print(arr,5);
    return 0;
}
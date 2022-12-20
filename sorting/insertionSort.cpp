#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
   
   for(int i=1; i<n; i++){
     int current = arr[i];
     int j = i-1;
     while (j>=0 && arr[j]>current)
     {
        arr[j+1] = arr[j];
        j--;
     }
     arr[j+1] = current;
   }
}

void print(int ans[], int n){
  for(int i =0; i<n; i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;
}

int main(){
   
   int arr[5] = {4,5,3,9,8};

    insertionSort(arr,5);
    cout<<"Sorted Array Using Insertion Sort"<<endl;
    print(arr,5);
    return 0;
}
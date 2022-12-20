#include<bits/stdc++.h>
using namespace std;

int parttion(int arr[], int s, int e){
  int pivot = arr[s];

  int cnt = 0;

  for(int i = s+1; i<=e; i++){
    if(arr[i]<=pivot)
       cnt++;
  }

  //place pivot at right place
  int pivotIndex = s + cnt;
  swap(arr[pivotIndex], arr[s]);

  //left and part ko dekho

  int i =s, j =e;
  while (i<pivotIndex && j>pivotIndex)
  {
    while (arr[i] <= pivot)
    {
        i++;
    }
    while (arr[j] > pivot)
    {
        j--;
    }

    if(i < pivotIndex && j>pivotIndex)
        swap(arr[i++], arr[j--]);
    
  }
  return pivotIndex;

}

void quickSort(int arr[], int s, int e){
    //base case
    if(s>=e)
       return;
    //partition
    int p = parttion(arr, s, e);

    //left part sort krna hai
    quickSort(arr, s, p-1);

    //right part sort krna hai
    quickSort(arr, p+1, e);

}

int main(){
    int arr[5] ={2,4,1,6,9};
    int n = 5;
    quickSort(arr, 0, n-1);

    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}
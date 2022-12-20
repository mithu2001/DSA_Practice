#include<bits/stdc++.h>
using namespace std;

bool isArraySorted(int arr[], int size){
    //base case
    if(size==0 || size==1)
       return true;
    
    if(arr[0]>arr[1]){
       return false;
    }
    else{
      bool res = isArraySorted(arr+1, size-1);
      return res;
    }

}

int arraySum(int arr[], int n){
    if(n==0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }
     
     int remainingPart = arraySum(arr+1,n-1);
     int sum = arr[0] + remainingPart;
    return sum;
}

bool linearSearch(int arr[], int size, int key){
    //base case
    if(size == 0)
      return false;

    if(arr[0] == key){
       return true;
    }   
    else{
      bool remainingPart = linearSearch(arr+1,size-1,key);
      return remainingPart;
    } 
}

bool binarySearch(int *arr, int s, int e, int k){
    //base case
    if(s>e)
       return false;
    int mid = s + (e-s)/2;

    if(arr[mid] == k)
       return true;

    if(arr[mid]<k){
        return binarySearch(arr, mid+1, e, k); 
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}


int main(){
    int arr[6] = {2,3,9,11,18,29};
    int n = sizeof(arr)/sizeof(arr[0]);

    // bool ans = isArraySorted(arr,n);
    // if(ans)
    //  cout<<"Array is sorted"<<endl;
    // else 
    // cout<<"Array is not sorted"<<endl;

    // int res = arraySum(arr,n);
    // cout<<res;

    /*
    int key =1;
    bool answer = linearSearch(arr, n, key);
    if(answer)
      cout<<"Present "<<endl;
    else
      cout<<"Not Present "<<endl;
    */
      
     int key = 18;
     int s = 0, e = n-1;
     bool result = binarySearch(arr, s, e, key);
     if(result)
        cout<<"Present "<<endl;
     else
        cout<<"Not Present "<<endl; 

    return 0;
}
#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){

    int s =0 , e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            // e = mid-1;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;

}

int lastOcc(int arr[], int n, int key){

    int s =0 , e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
           
            s=mid+1;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;

}

int main(){

   int even[5]={1,3,2,3,2};

   cout<<"first occurence of 3 is at index "<<firstOcc(even,5,2)<<endl;
   cout<<"last occurence of 2 is at index "<<lastOcc(even,5,2)<<endl;
    return 0;
}
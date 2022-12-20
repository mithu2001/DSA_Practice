#include<iostream>
using namespace std;


int FirstOccurence(){
  
}

int lastOccurence(){

}



int binarySearch(int arr[],int size, int key){
  int low =0;
  int high = size-1;
  int mid = (low+high)/2;
  
  while(low<high){
    if(arr[mid]==key) 
        return mid;

    else if(arr[mid]<key){
        low = mid+1;
    }
    else if(arr[mid]>key){
      high = mid-1;
    }
  }
    return -1;
}


int main(){
    int even[6]= {2,4,6,8,10,12};
    int odd[6]= {1,3,5,7,9,11};

    int index = binarySearch(even,6,8);

    cout<<index<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

 bool isPresent(int arr[][4], int num, int i, int j){
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            if(arr[i][j] == num)
               return 1;
        }
        
    }
    return 0;
 }


 void printSum(int arr[][4], int i, int j){
    
    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j = 0; j<4; j++){
            sum+=arr[i][j];
        }
        cout<<"Sum of "<<i+1<<" th row is "<<sum<<endl;
    }
 }


int largestRowsum(int arr[][4], int i, int j){
int maxi = INT16_MIN;
int rowIndex = -1;
for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j = 0; j<4; j++){
            sum+=arr[i][j];
        }
        if(maxi<sum){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return rowIndex+1;

}


int main(){

    //create 2 d array
    int arr[3][4] = {{1,2,3,4},{27,28,29,30},{}};

    //taking input -> row wise
   cout<<"Enter the input "<<endl;
    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++){
            cin>>arr[row][col];
        }
    }
    

     //taking input -> column wise
    /* 
    for(int col = 0; col<4; col++){
        for(int row = 0; row<3; row++){
            cin>>arr[row][col];
        }
    }
   */
    
    //print
    cout<<"Printing the Array element "<<endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
    /*
    int num;
    cout<<"Enter the number you want to search "<<endl;
    
     cin>>num;
     if(isPresent(arr, num, 3, 4))
       cout<<"Number Present hai "<<endl;
    else
       cout<<"Not Present hai "<<endl;
    return 0;
    */
   printSum(arr, 3, 4);
   cout<<largestRowsum(arr,3,4)<<endl;

}



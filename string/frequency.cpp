#include<bits/stdc++.h>
using namespace std;

// void countFrequency(int *arr, int n){

//     unordered_map<int,int>mp;
//     //inserting 
//     for(int i=0; i<arr.size(); i++){
//         mp[arr[i]]++;
//     }

    //traverse map

//     for(auto i:mp){
        
//         cout<<i.second<<endl;
//     }
// }

int main(){


    int arr[7]= {1,3,6,7,3,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    // string str = "jai shree krishna";
    // countFrequency(arr, 7);

    unordered_map<int,int>mp;

//inserting into the map
    for(int i=0; i<n; i++){
       mp[arr[i]]++;
    }

//traversing the map
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
    
    string str ="Jai shree ram";
    int n1 = str.length();
    unordered_map<char,int>mpstr;
    for(int i=0; i<n1; i++){
        mpstr[str[i]]++;
    }
    for(auto it:mpstr){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}
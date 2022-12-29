#include<bits/stdc++.h>
using namespace std;

int findMinDiff(int arr[], int n){
    // sort(arr, arr+n);
    int i = 0;
    int j = n-1;
    int mini = INT_MAX;
    while(j<i){
        int diff = arr[j] - arr[i];
        mini = min(mini,diff);
        i++;
        j++;
    }
    return mini;
}

int main(){
    int arr[8] = {3,4,1,9,56,7,9,12};
    cout<<findMinDiff(arr,8)<<endl;
    return 0;
}
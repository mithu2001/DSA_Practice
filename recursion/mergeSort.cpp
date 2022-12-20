#include <bits/stdc++.h>
using namespace std;


// Two things
// 1. divide array from mid
// 2. then merge it
void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid -s+1;
    int len2 = e-mid;
    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayindex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayindex++];
    }

    mainArrayindex = mid+1;

    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayindex++];
    }

    //merge two sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayindex = s;
    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2])
          arr[mainArrayindex++] = first[index1++];
        else
           arr[mainArrayindex++] = second[index2++];
    }
    while(index1<len1){
        arr[mainArrayindex++] = first[index1++];
    }
    while (index2<len2)
    {
        arr[mainArrayindex++] = second[index2++];
    }
    
    delete []first;
    delete []second;
      
}

void mergeSort(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    // base case
    if (s >= e)
        return;
    // left part bhi sort krna hai
    mergeSort(arr, s, mid);

    // right part sort

    mergeSort(arr, mid + 1, e);

    // merge both sorted array
    merge(arr, s, e);
}

int main()
{
    int arr[7] = {2, 5, 3, 4, 6, 7, 1};
    int n = 7;
    mergeSort(arr, 0, n - 1);

    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
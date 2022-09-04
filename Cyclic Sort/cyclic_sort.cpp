#include<bits/stdc++.h>
using namespace std;

void cyclicSort(int arr[], int n){
    int i = 0;
    while(i < n){
        int correct_idx = arr[i] - 1;
        if( arr[i] != arr[correct_idx]){
            swap(arr[i], arr[correct_idx]);
        }
        else{
            i++;
        }
    }
}

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    int arr[] = {3,5,2,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cyclicSort(arr, n);
    display(arr,n);
    return 0;
}
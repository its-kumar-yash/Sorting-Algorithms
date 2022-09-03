#include<bits/stdc++.h>
using namespace std;

void partitioningArray(int arr[], int n, int pivot){
    int i = 0, j = 0;
    while(i < n){
        if(arr[i] > pivot){
            i++;
        }
        else{
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
    }
}

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int arr[] = {7, 9, 4, 8, 3, 6, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pivot = 5;

    partitioningArray(arr, n, pivot);
    display(arr, n);
    return 0;
}
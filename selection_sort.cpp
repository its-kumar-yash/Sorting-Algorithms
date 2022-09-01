#include<bits/stdc++.h>
using namespace std;

//selecting the minimum element and placing it to its right position

void selectionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int min_idx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        //swapping element at min index to the ith element
        swap(arr[i], arr[min_idx]);
    }
}

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    int arr[5] = {10, 13, 15, 1, 12};
    selectionSort(arr, 5);

    display(arr, 5);
    return 0;
}
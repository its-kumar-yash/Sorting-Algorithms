#include<bits/stdc++.h>
using namespace std;


//place the element at the correct LHS position
void insertionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i - 1; j >= 0; j--){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
            else{
                break;
            }
        }
    }
}

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    int arr[5] = {10, 13, 15, 1, 12};
    insertionSort(arr, 5);

    display(arr, 5);
    return 0;
}
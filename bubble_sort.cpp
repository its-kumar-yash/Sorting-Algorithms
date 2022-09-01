#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){

    for(int i = 0; i <= n - 1; i++){
        // for round 1 to n-1
        bool flag = false;
        for(int j = 0; j< n - i ; j++){
            //till n - ith element
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
        if(flag == false){
            break; //Already Sorted
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
    bubbleSort(arr, 5);

    display(arr, 5);
    return 0;
}
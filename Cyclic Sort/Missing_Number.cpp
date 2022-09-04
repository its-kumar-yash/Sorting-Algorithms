#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[],int n){
    int i = 0;
    while(i < n){
        int correct_idx = arr[i];
        if(arr[i] < n && arr[i] != arr[correct_idx]){
            swap(arr[i], arr[correct_idx]);
        }
        else{
            i++;
        }
    }

    
    for(int i = 0; i < n; i++){
        if(arr[i] != i ){
            return i;
        }
        
    }

    return n;
}

int main(){
    
    int arr[] = {3, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int N = 3;
    cout<<missingNumber(arr, n)<<endl; 
    return 0;
}
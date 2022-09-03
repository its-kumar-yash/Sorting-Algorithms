#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int pivot, int l, int h){
    int i = l, j = l;
    while(i <= h){
        if(arr[i] <= pivot){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    return j-1;
}

//kth smallest elemenb
int quickSelect(int arr[], int l, int h, int k){
    
    int pivot = arr[h];
    int pi = partition(arr, pivot, l, h);
    if(pi == k){
        return arr[pi];
    }
    else if(pi < k){
        return quickSelect(arr, pi+1, h, k);
    }
    else{
        return quickSelect(arr, l, pi - 1, k);
    }
}

int main(){
    

    int arr[] = {8, 5, 1, 3, 7, 2, 9, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<quickSelect(arr, 0, n-1, 3); //4th smallest
    return 0;
}
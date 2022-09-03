#include<bits/stdc++.h>
using namespace std;

int partitioningArray(int arr[], int l, int h, int pivot){
    int i = l, j = l;
    while(i <= h){
        if(arr[i] > pivot){
            i++;
        }
        else{
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
    }

    return j - 1; 
}

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void quickSort(int arr[], int l, int h){
    //base case
    if(l >= h){
        return;
    }

    int pivot = arr[h];
    int pi = partitioningArray(arr, l, h, pivot);
    quickSort(arr, l, pi - 1);
    quickSort(arr, pi + 1, h);
}


int main(){
    
    int arr[] = {8, 5, 1, 3,7, 2, 9, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    display(arr, n);

    return 0;
}
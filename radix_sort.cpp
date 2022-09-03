#include<bits/stdc++.h>
using namespace std;

void countSort(vector<int>& arr, int expo){
    int range = 10;
    vector<int> freqArr (range, 0);

    //frequency array is created
    for(int i = 0; i < arr.size(); i++){
        freqArr[(arr[i]/expo) % 10]++ ; 
    }

    //for stable sort reverse loop is used

    //prefix sum array is created
    for(int i = 1; i < freqArr.size(); i++){
        freqArr[i] = freqArr[i] + freqArr[i - 1];
    }

    vector<int> ans (arr.size()); 

    for(int i = arr.size() - 1; i>=0; i--){
        int pos = freqArr[arr[i]/expo % 10] - 1;
        ans[pos] = arr[i];
        freqArr[arr[i]/expo % 10]--;
    }

    for(int i = 0; i < arr.size(); i++){
        arr[i] = ans[i];
    }
}

void radixSort(vector<int>& arr){
    int max = *max_element(arr.begin(), arr.end());

    int expo = 1;
    while(expo <= max){
        countSort(arr, expo);
        expo *= 10;
    }
}


void display(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    vector<int> arr = {213, 22, 718, 123, 37, 443, 982, 64, 375, 683};
    radixSort(arr);
    display(arr);
    return 0;
}
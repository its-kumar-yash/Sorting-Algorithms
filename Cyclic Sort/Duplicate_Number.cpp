#include<bits/stdc++.h>
using namespace std;

int duplicateNumber( vector<int> arr){
    int i = 0;
    while( i < arr.size()){
        int correct_idx = arr[i] - 1;
        if(arr[i] != arr[correct_idx]){
            swap(arr[i], arr[correct_idx]);
        }
        else{
            i++;
        }
    }

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != i+1){
            return arr[i];
        }
    }
}


int main(){
    
    vector<int> arr = {1,3,4,2,4};
    cout<<duplicateNumber(arr)<<endl;
    return 0;
}
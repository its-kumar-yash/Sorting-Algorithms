#include<bits/stdc++.h>
using namespace std;

int missingPositive(vector<int> arr){
    int i = 0;
    while(i < arr.size()){
        int correct = arr[i] - 1;
        if(arr[i] > 0 && arr[i] <= arr.size() && arr[i] != arr[correct]){
            swap(arr[i], arr[correct]);
        }
        else{
            i++;
        }
    }

    for(int i = 0; i< arr.size(); i++){
        if(arr[i] != i + 1){
            return i + 1;
        }
    }

    return arr.size() + 1;
}

int main(){
    
    vector<int> arr = {0,1,2};
    cout<<missingPositive(arr)<<endl;
    return 0;
}
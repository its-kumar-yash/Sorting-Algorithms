#include<bits/stdc++.h>
using namespace std;

vector<int> mergetwoArray(vector<int> arr1, vector<int> arr2){
    vector<int> res (arr1.size() + arr2.size());
    int i = 0, j = 0, k = 0;
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            res[k] = arr1[i];
            i++;
            k++;
        }
        else{
            res[k] = arr2[j];
            j++;
            k++;
        }
        
    }
    while(i < arr1.size()){
        res[k] = arr1[i];
        i++;
        k++;
    }
    while(j < arr2.size()){
        res[k] = arr2[j];
        j++;
        k++;
    }

    return res;
}

void display(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}


int main(){
    
    vector<int> arr1 = { 5, 10, 15, 20};
    vector<int> arr2 = { 7, 11, 19, 32, 89};

    vector<int> res = mergetwoArray(arr1, arr2);
    display(res); 

    return 0;
}
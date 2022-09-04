#include<bits/stdc++.h>
using namespace std;

vector<int> mismatch(vector<int> arr){
    int i = 0;
    while(i < arr.size()){
        int correct = arr[i] - 1;
        if(arr[i] != arr[correct]){
            swap(arr[i], arr[correct]);
        }
        else{
            i++;
        }
    }

    vector<int> ans;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != i + 1){
            ans.push_back(i+1);
            ans.push_back(arr[i]);
        }
    }

    return ans;
}

int main(){
    

    vector<int> arr = {1,2,2,4};
    vector<int> ans = mismatch(arr);
    for(int i = 0; i< ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

vector<int> disappearedNumbers(vector<int> arr){
    int i = 0;
    while(i < arr.size()){
        int correct_idx = arr[i] - 1;
        if(arr[i] != arr[correct_idx]){
                swap(arr[i], arr[correct_idx]);
        }
        else{
            i++;
        }
    }

    vector<int> ans;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] != i + 1){
            ans.push_back(i+1);
        }
    }

    return ans;
}


int main(){
    
    vector<int> arr = {4,3,2,7,8,2,3,1};
    vector<int> ans = disappearedNumbers(arr);
    for(int i = 0; i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}
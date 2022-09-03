#include<bits/stdc++.h>
using namespace std;

vector<int> countSort(vector<int> arr,int min, int max){
    int range = max - min + 1;
    vector<int> freqArr (range, 0);

    //frequency array is created
    for(int i = 0; i < arr.size(); i++){
        int idx = arr[i] - min;
        freqArr[idx] ++ ; 
    }

    //for stable sort reverse loop is used

    //prefix sum array is created
    for(int i = 1; i < freqArr.size(); i++){
        freqArr[i] = freqArr[i] + freqArr[i - 1];
    }

    vector<int> ans (arr.size()); 

    for(int i = arr.size() - 1; i>=0; i--){
        int val = arr[i];
        int pos = freqArr[val - min];
        int idx = pos - 1;
        ans[idx] = val;
        freqArr[val - min]--;
    }

    return ans;
}


void display(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    
    vector<int> arr = {9,6,3,5,3,4,3,9,6,4,6,5,8,9,9};

    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    
    vector<int> ans = countSort(arr, min, max);
    display(ans);

    return 0;
}
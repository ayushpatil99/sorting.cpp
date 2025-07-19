#include<iostream>
#include<vector>
using namespace std;


void merge(vector<int>& arr, int st, int mid, int end){
    vector<int> temp;
    int i = st;
    int j = mid + 1;
    
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx < temp.size(); idx++){
        arr[st + idx] = temp[idx];
    }
}







void mergeSort(vector<int>& arr, int start, int end){
    if(start < end){
        int mid = start + (end - start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
    
}

int main(){
    vector<int> arr{12,31,17,35,32,8};
    int st = 0;
    int end= arr.size() - 1;
    mergeSort(arr,st,end);
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;

}
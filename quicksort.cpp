#include<iostream>
#include<vector>

using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a=b;
    b=temp;
    }


int partition(vector<int>& arr, int st, int end){

    int piv = arr[end];
    int idx = st - 1;
    for(int j=st; j<end; j++){
        if(arr[j]<=piv){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[idx],arr[end]);
    return idx;
   
}







void quickSort(vector<int>& arr, int start, int end){
    if(start < end){
        int pvtIdx = partition(arr,start,end);
        quickSort(arr,start,pvtIdx-1);
        quickSort(arr,pvtIdx+1,end);
        
    }
    
}

int main(){
    vector<int> arr{12,31,17,35,32,8};
    int st = 0;
    int end= arr.size() - 1;
    quickSort(arr,st,end);
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;

}
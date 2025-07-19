#include<iostream>

using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a =b;
    b=temp;
}

void bubblesort(int arr[], int sz){
    for(int i = 0; i<sz; i++){
        for(int j= 0; j<sz-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void print(int arr[], int sz){
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={5,6,7,8,9,4,3,2,1};
    int sz = sizeof(arr)/sizeof(int);
    bubblesort(arr,sz);
    print(arr,sz);
    return 0;
}
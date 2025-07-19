#include<iostream>

using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a =b;
    b=temp;
}

void insertionsort(int arr[], int sz){
    for(int i=1; i<sz; i++){
        int curr = arr[i];
        int prev = i-1;
        while(arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1]= curr;

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
    insertionsort(arr,sz);
    print(arr,sz);
    return 0;
}
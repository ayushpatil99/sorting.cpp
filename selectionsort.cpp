#include<iostream>

using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a =b;
    b=temp;
}

void selectionsort(int arr[], int sz){
    for(int i = 0; i<sz; i++){
        int min = i;
            for(int j= i+1; j<sz; j++){
                if(arr[min]>arr[j]){
                    min = j;
                }
                swap(arr[min],arr[i]);
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
    selectionsort(arr,sz);
    print(arr,sz);
    return 0;
}
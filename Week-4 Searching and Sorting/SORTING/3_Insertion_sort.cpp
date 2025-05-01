#include<iostream>
using namespace std;
void incInsertionSort(int arr[], int size){
    // outer loop
    for(int i=1; i<size; i++){
        // inner loop
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void decInsertionSort(int arr[], int size){
    // outer loop
    for(int i=1; i<size; i++){
        // inner loop
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]<key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){

    int arr[]={10,4,8,6,2,16,12,14};
    int size=8;

    incInsertionSort(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    decInsertionSort(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    


    return 0;
}
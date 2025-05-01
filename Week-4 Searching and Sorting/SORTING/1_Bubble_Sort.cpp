#include<iostream>
using namespace std;
void incBubbleSort(int arr[], int size){
    // outer loop
    for(int i=0; i<size; i++){
        // inner loop
        for(int j=0; j<size-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
} 

void decBubbleSort(int arr[], int size){
    // outer loop
    for(int i=0; i<size; i++){
        // inner loop
        for(int j=0; j<size-1-i; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
} 

int main(){
    int arr[]={2,10,50,20,0,-1,7,5};
    int size=8;

    incBubbleSort(arr, size);

    // printing increasing sorted array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    decBubbleSort(arr, size);

    // printing decreasing sorted array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
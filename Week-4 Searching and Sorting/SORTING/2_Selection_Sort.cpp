#include<iostream>
using namespace std;
void incSelectionSort(int arr[], int size){
    // outer loop
    for(int i=0; i<size-1; i++){
        int minIndex=i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void decSelectionSort(int arr[], int size){
      // outer loop
      for(int i=0; i<size-1; i++){
        int minIndex=i;
        for(int j=i+1; j<size; j++){
            if(arr[j] > arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

}
int main(){
    int arr[]={10,4,8,6,2,16,12,14};
    int size=8;

    incSelectionSort(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    decSelectionSort(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
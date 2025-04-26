#include<iostream>
using namespace std; 
int search(int arr[], int target, int size){
    int s=0; int e=size-1; int mid=s+(e-s)/2;

    while(s<=e){
        // mid-1>=0 check kiya taki invalid index access na kar de
        if(mid-1>=0 && arr[mid-1] ==  target){
            return mid-1;
        }
        if(arr[mid] ==  target){
            return mid;
        }
        // mid+1 < size check kiya taki invalid index access na kar de
        if(mid+1 < size && arr[mid+1] ==  target){
            return mid+1;
        }

        if(target> arr[mid]){
            // right mai jao aur mid+1 already check kar chuke hai upar isliye mid+2 kiya takie dobara check na karna pade
            s=mid+2;
        }
        else{
            // target left side mai hai to left ko move karo
            // mid-1 already check kardiya hai upar isliye mid-2 kiya hai
            e=mid-1;
        }
        // update mid
        mid=s+(e-s)/2;
    }

    // target not found return -1
    return -1;
}
int main(){
    // Nearly sorted array mai jo sorted array ka i'th index ka element hota hai vo ya toh i-1, i, i+1 hoga tab vo array nearly sorted array hogi

    int arr[]={20,10,30,50,40,70,60};
    int size=7;
    int target=60;

    int targetIndex= search(arr, target, size);
    if(targetIndex ==-1){
        cout<<"The target is not found"<<endl;
    }
    else{
        cout<<"The target is found at index: "<< targetIndex<<endl;
    }
    return 0;
}
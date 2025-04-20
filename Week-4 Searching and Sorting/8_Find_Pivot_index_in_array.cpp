// Given a sorted and rotated array find pivot index here Pivot index means the index of the largest element. another ques can also be made to find smallest element in sorted and rotated array.


#include<iostream>
using namespace std;

int findPivotIndex(int arr[], int size){
    int s=0; int e=size-1;
    int mid= s+ (e-s)/2;

    while(s<=e){
        // If only one element is present
        if(s==e){
            return s;
        }
        // check if current mid is greater than mid+1, then mid is the pivot(largest) 
        if(arr[mid]>arr[mid+1]){
            return mid;
        }
        // check if current mid is smaller than mid-1 then the mid-1 is the pivot largest
        else if(arr[mid]< arr[mid-1]){
            return mid-1;
        } 
        // you are in secodn part of the array shift to left to find the largest element
        else if(arr[s]> arr[mid]){
            e=mid-1;
        }
        // if(arr[s]<arr[mid]) you are is first part and pivot is in right so move to right
        else if(arr[s]<arr[mid]) {
            s=mid+1;
        } 
        // update mid
        mid=s+(e-s)/2;
    }

    // if pivot not found return -1
    return -1;
}


int main(){

    int arr[]={12,14,16,2,4,6,8,10};
    int size=8;

    int ans= findPivotIndex(arr, size);
    if(ans!=-1){
        cout<<"The pivot is found at index: "<<ans <<" & the element is: "<<arr[ans];
    }

    return 0;
}
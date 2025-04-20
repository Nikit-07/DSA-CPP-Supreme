// given an array which is sorted then rotated at some index find the target element 
// first appraoch- we can use linear search but it's TC- O(n);
// using binary search TC-O(logn); 

// Approach first we will find the largest element in the array then we will get two different sorted array 
// We will apply binary search in both array and serach our element and if fount return it else return -1;



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
        // yaha pe galti hogi mid+1 out od bound ja sakta hai 
        if(mid+1 < size && arr[mid]>arr[mid+1]){
            return mid;
        }
        // check if current mid is smaller than mid-1 then the mid-1 is the pivot largest
        // yaha pe galti hogi mid-1 out od bound ja sakta hai 
        else if( mid-1>=0 && arr[mid]< arr[mid-1]){
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

int binarySearch(int arr[], int s, int e, int target){
    int mid= s+ (e-s)/2;

    while(s<=e){
        if(target == arr[mid]){
            return mid;
        }
        else if(target >arr[mid]){
            s=mid+1;
        }

        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}


int main(){

    int arr[]={12,14,16,2,4,6,8,10};
    int size=8;
    int target=14;
    int ans=-1;

    int PivotIndex= findPivotIndex(arr, size);

    if(target>= arr[0]&& target<= arr[PivotIndex]){
        ans=binarySearch(arr, 0, PivotIndex, target);
    }
    else{
        ans=binarySearch(arr, PivotIndex+1, size-1, target);
    }

    if(ans !=-1){
        cout<<"The target is found at index: "<<ans;
    }else{
        cout<<"The target is not found";
    }
    

    return 0;
}
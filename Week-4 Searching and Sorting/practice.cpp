// Given a sorted and rotated array find pivot index here Pivot index means the index of the largest element. another ques can also be made to find smallest element in sorted and rotated array.


#include<iostream>
using namespace std;

int findPivotIndex(int arr[], int size){
    int s=0;
    int e=size-1;
    int mid= s+(e-s)/2;

    while(s<=e){
        if(size ==  1){
            return 0;
        }

        if(arr[mid] < arr[mid-1]){
            return mid-1;
        }
        else if(arr[mid]> arr[mid+1]){
            return mid;
        }
        else if( arr[mid] < arr[s] ){
            e= mid-1;
        }
        else{
            s=mid+1;
        }
        mid= s+(e-s)/2;
    }

    return -1;

}

int binarySearch(int arr[], int target, int s, int e){

    int mid= s+(e-s)/2;

    while(s<=e){
        if(arr[mid] == target){
            return mid;
        }
        if(target > arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }

    return -1;

}



int main(){

    int arr[]={12,14,16,2,4,6,8,10};
    int size=8;
    int target=10;
    int result=-1;

    int ans= findPivotIndex(arr, size);
    if(ans!=-1){
        cout<<"The pivot is found at index: "<<ans <<" & the element is: "<<arr[ans]<<endl;
    }

    if(target >=arr[0] && target <= arr[ans]){
        result =binarySearch(arr, target, 0, ans);
    }
    else{
        result = binarySearch(arr, target, ans+1, size-1);
    }

if( result ==-1){
        cout<<"The target is not found";
    } else{
        cout<<"The target is found at index "<< result << " And the target is "<< arr[result];
    }

    return 0;
}
#include<iostream>
using namespace std;
int firstOccurence(int arr[], int size, int target){

    int start = 0;
    int end =  size-1;
    int mid= start + (end - start)/2;
    int ans= -1;

    while(start <= end){
        if(target ==  arr[mid]){
            ans= mid;
            end=mid-1;
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else if(target< arr[mid]){
            end = mid-1;
        }

        mid= start + (end-start)/2;
    }

    return ans;
}

int lastOccurence(int arr[], int size, int target){

    int start = 0;
    int end =  size-1;
    int mid= start + (end - start)/2;
    int ans= -1;

    while(start <= end){
        if(target ==  arr[mid]){
            ans= mid;
            start=mid+1;
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else if(target< arr[mid]){
            end = mid-1;
        }

        mid= start + (end-start)/2;
    }

    return ans;
}

int totalOccurrence(int arr[], int size, int target){
    int firstOcc= firstOccurence(arr, size, target);
    int lastOcc= lastOccurence(arr, size, target);
    int total = lastOcc - firstOcc +1;
    return total;
}

int main(){

    int arr[]={10,30,30,30,30,30,40,50,60};
    int size=9;
    int target=30;

    int ans = totalOccurrence(arr, size, target); 

    if(ans == -1){
        cout<<"The target is not found";
    }
    else{
        cout<<"The total occurrence is:  "<< ans<< endl;

    }
    return 0;
}
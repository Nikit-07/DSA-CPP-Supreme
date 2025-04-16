#include<iostream>
using namespace std;
int findMissingElement(int arr[], int size){
    int start=0; 
    int end= size-1;
    int ans=-1;
    int mid= start+ (end-start)/2;

    while(start <= end){
        if(arr[mid] == size){
            ans=size;
        }

        int diff = arr[mid]-mid;
        if(diff == 1){
            // right mai jao
            start=mid+1;
        } 
        else{
            // ans store karo 
            // left mai jao
            ans=mid;
            end=mid-1;
        }

        mid= start+ (end-start)/2;
    }

    // how to add this condition above 
    // if(ans+1 == 0){
    //   ans=size+1;
    // }
   
   

    return ans+1 ;
}

int main(){
    int arr[]={1,2,4,5,6,7,8,9};
    int size=8;

    int ans =  findMissingElement(arr, size);

    cout<<"The missing element in the array is: "<< ans<<endl;
    return 0;
}
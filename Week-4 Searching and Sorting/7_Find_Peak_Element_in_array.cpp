#include<iostream>
using namespace std;
int peakElement(int arr[], int n){
    int s=0; 
    int e=n-1;
    int mid= s+ (e-s)/2;

    while(s<e){
        if(arr[mid] < arr[mid+1]){
            // A wali line left par hu 
            // Right side mai peak exist karti hai to right ko jao
            s = mid+1;
        }
        else{
            //ya to mai b(right) line par hu ya toh mai Peak element par hu to ans store karo aur left side ko jao
            e= mid;
        }

        mid= s+ (e-s)/2;

    }

    // direct index peak element ka index return do 
    return s;

    
}
int main(){
    int arr[]={10,20,30,80,70,60,50,40,30,10};
    int n=10;
    int peak =peakElement(arr, n);
    cout<<"Peak element is: "<<arr[peak]<< " at index "<< peak;
    return 0;
}


#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int target=5;

    int size=6;
    bool val= false;

    for(int i=0; i<size; i++){
        if(arr[i]==target){
            cout<<"Target is found at index: "<< i;
            val= true;
        }
    }

    if(!val){
        cout<<"The target is not found";
    }


    return 0;
}
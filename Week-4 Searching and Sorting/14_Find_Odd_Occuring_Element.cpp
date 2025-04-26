#include<iostream>
using namespace std;
int findOdd(int arr[], int size){
    int s=0; int e=size-1; int mid=s+(e-s)/2;

    while(s<=e){
        if(s==e){
            return s;
        }

        // ans hamesha odd index par exist karega hoga 
        // if mid is odd
        if(mid&1){
            // left side par ho ans right mai exist karta hai
            // mid-1 se invalid index access ho sakta hai isliye mid-1 >=0 
            if(mid-1>=0 && arr[mid] == arr[mid-1]){
                s=mid+1;
            }
            else{
                // right side par ho ans left mai exist karta hai
                e=mid-1;
            }
        }
        // if mid is even
        else{
            // left side par ho ans right mai exist karta hai
            // mid+1 se invalid index access ho sakta hai isliye mid+1 <size 
            if(mid+1 <size && arr[mid] == arr[mid+1]){
                // mid+1 already check kar diya hai isliye mid+2 kiya 
                s=mid+2;
            }
            else{
                // ya toh ans par khade ho kyuki ans odd index par exist karta hai
                // ya phir right side par khade ho 
                // isliye e=mid kiya kyuki mid-1 karne se ans lost ho sakta hai
                e=mid;
            }
        }

        mid=s+(e-s)/2;
    }
    // agar ans nahi mila toh invalid index return kar do
    return -1;

}

int main(){

    int arr[]={2,2,5,5,10,10,3,9,9,8,8,7,7};
    int size=13;
    int ans= findOdd(arr,size);

    if(ans!=-1){
        cout<<"The odd occuring element is: "<< arr[ans]<<" present at index: "<<ans<<endl;
    }

    return 0;
}
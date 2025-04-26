// divide two no using binary search

#include<iostream>

using namespace std;
int binarySearch(int dividend, int divisor){
    int s=0; int e=dividend;
    int mid=s+(e-s)/2;
    int ans=-1;

    if(dividend==0){
        return 0;
    }
    if(divisor==0){
        return -1 ;
    }

    while(s<=e){
        if(divisor*mid == dividend){
            return mid;
        }
        if(divisor* mid< dividend){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }

    return ans;

}

int main(){
    int dividend=50;
    int divisor=7;

   


    int ans= binarySearch(abs(dividend), abs(divisor));

    // if dividend or divisor is negative
    if((dividend>0 && divisor<0) || (dividend<0 && divisor >0)){
        ans=0-ans;
    }

    if(ans ==-1){

        cout<<"The ans is Infinty";
    }
    else{
        cout<<"The quotient after dividing is: "<< ans;
    }


    return 0;
}
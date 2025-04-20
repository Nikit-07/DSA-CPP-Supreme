// find sqrt of the no wihtout using any inbuilt function 
// Basically we are using the search space concept here
// apprach- out ans likes between 0 to given no
// so we will use binary search to find the no
// if mid*mid== no return mid
// if mid*mid > no than move to left end = mid-1
// if mid*mid < no than store the mid inside ans then calculate new mid as there might be more mid whose value is mid*mid < no or not that's why we have stored ans 
// if no such value is fount then return this mid value 
// TC- O(logn);

#include<iostream>
using namespace std;

int findSqrt(int no){
    int ans=-1;
    int s=0; int e=no; 
    // here this is because mid * mid might go outh of INT_MAX value
    long long int mid=s+(e-s)/2;

    while(s<=2){
        if(mid*mid== no){
            return mid;
        }
        else if(mid*mid >no){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }
    return ans;

}
int main(){
    int no=68;
    int ans= findSqrt(no);
    cout<<ans;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// comparator
bool comparator(int& a, int& b){
    return a>b; //decreasing order
    // return a<b; //increasing
}


void print(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void printArr(int v[], int size){
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

// printing 2d Vector
void print2D(vector<vector<int>>& vec){
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec[0].size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

bool vecComparator(vector<int>& a, vector<int>& b){
    return a[1]>b[1]; //decreasing order
    // return a[1] <b[1]; //increasing order
}



int main(){
    // sort function is an inbuilt function in c++ stl library
    // sort function for normal array
    int arr[]={4,1,3,5,6,7,9,11,15};
    int size=9;
    sort(arr, arr+size);
    // printArr(arr,size);

 


    vector<int>v= {4,1,3,5,6,7,9,11,15};
// sort function for vector array
    sort(v.begin(), v.end());
    // print(v);


// if you want to decide the order of sorting the sort funciton have third parameter using which we can decide
    sort(v.begin(), v.end(), comparator );
    // print(v);


    // SORT FUNCTION FOR 2-D VECTOR
    vector<vector<int>> vec={
        {0,9},
        {0,11},
        {0,5},
        {1,12},
        {1,4},
        {2,44},
        {2,55}   
    };
// so by default the sort function sorts the 2d vector by 0-based indexing 
    sort(vec.begin(), vec.end());
    print2D(vec);

    // sort function using comparator for specific index based sorting
    sort(vec.begin(), vec.end(), vecComparator);
    cout<<"Comparator based sorting"<<endl;
    print2D(vec);




    return 0;

    
}
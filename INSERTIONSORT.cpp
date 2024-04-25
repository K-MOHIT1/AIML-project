#include<iostream>
using namespace std;
int main(){
    int arr[]={5,30,1,-4,2};
    for(int ell : arr){
        cout<<ell<<" ";

    }
    cout<<endl;
    int n=5;
    //insertion sort
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }

    }
     for(int ell : arr){
        cout<<ell<<" ";

    }
}
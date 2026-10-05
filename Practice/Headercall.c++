#include<iostream>
#include"D:\C++\Practice\MergeSort.h++"
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original Array: ";
    display(arr,n);
    mergeSort(arr,0,n-1);
    cout<< "Sorted Array";
    display(arr,n);
    return 0;
}
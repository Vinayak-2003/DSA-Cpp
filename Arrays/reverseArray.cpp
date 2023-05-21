//write a c++ program to reverse an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //*******************by swaping the elements*********************
    int start=0;                                                            //[1 2 3 4 5 6] ==> [6 2 3 4 5 1](swap with last elements and
    int end=n-1,temp;                                                       //then increase the start and decrease the end)
    while(start<=end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //*******************Printing a reverse array***************************
    
    // cout<<"Reverse array is ";
    // for(int i=n-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }

    return 0;
}
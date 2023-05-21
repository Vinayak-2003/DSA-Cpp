//write a c++ program to swap alternate elements in an array
//[1 2 3 4 5 6]
//[2 1 4 3 6 5]
#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int A[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(A[i], A[i+1]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapAlternate(arr,n);
    return 0;
}
//Given an array of integers arr, return the element which is duplicated
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"The duplicate element present is "<<arr[i];
                arr[j]=0;
                return 1;
            }
        }
    }

    return 0;
}
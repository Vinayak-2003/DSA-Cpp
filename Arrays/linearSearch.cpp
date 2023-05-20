//write a c++ pragram for linear search
#include<bits/stdc++.h>
using namespace std;

bool search(int A[], int n, int key){
    for(int i=0;i<n;i++){
        if(A[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int n,k;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter a number to find in the array: ";
    cin>>k;
    bool found = search(arr,n,k);

    if(found==true)
    cout<<"Element found";
    else
    cout<<"Element not found";

    return 0;
}
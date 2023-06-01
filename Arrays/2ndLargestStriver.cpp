//Given an array Arr of size N, print second largest and second smallest distinct element from an array.
#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[] , int n){                   //Optimal solution
    int largest = arr[0];
    int slargest = -1;
    for(int i=1;i<n;i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(largest == arr[i]) continue;
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondSmallest(int arr[] , int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int A[1000];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    cout<<"Second largest and smallest element is "<<secondLargest(A , n)<<" "<<secondSmallest(A , n);

    return 0;
}

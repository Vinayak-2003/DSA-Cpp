//c++ program for finding minimum maximum number in an array using INT_MIN and INT_MAX
#include<bits/stdc++.h>
using namespace std;

int getMax(int A[], int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi, A[i]);
        // if(maxi < A[i]){
        //     maxi=A[i];
        // }
    }
    cout<<maxi<<endl;
    return 0;
}

int getMin(int A[], int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini = min(mini, A[i]);
        // if(mini > A[i]){
        //     mini=A[i];
        // }
    }
    cout<<mini;
    return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    getMax(arr,n);
    getMin(arr,n);
    return 0;
}
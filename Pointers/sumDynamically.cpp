//sum of array using DYNAMIC MEMORY 
#include<bits/stdc++.h>
using namespace std;

int getSum(int* arr , int n){
    int sum=0;
    cout<<"getSum: "<<arr<<endl;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Main: "<<arr<<endl;
    int ans = getSum(arr , n);
    cout<<ans;
    return 0;
}
//write a c++ program to sum the elements of an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum is "<<sum;
    return 0;
}
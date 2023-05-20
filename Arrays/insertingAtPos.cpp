//Write a c++ program to insert any number at any position in an array
//1 2 3 4 5                         {1 2 100 3 4 5}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pos,num,temp;
    cout<<"Enter the position and number you want to insert: ";
    cin>>pos>>num;
    for(int i=n;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
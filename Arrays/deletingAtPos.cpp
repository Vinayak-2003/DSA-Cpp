//write a c++ program to delete any element from a position
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int pos;
    cout<<"Enter the position for deletion: ";
    cin>>pos;
    for(int i=pos-1;i<n;i++){
        A[i]=A[i+1];
    }
    for(int i=0;i<n-1;i++){
        cout<<A[i]<<" ";
    }

    return 0;
}
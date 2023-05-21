//given an array of length 2m+1, now in this array "m" number of terms appear twice and only one elemnent appears once. 
//Find that one element
//[6 5 1 9 6 9 5]  ==> "1"
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,unum,temp;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements ";
    for(int i=0;i<2*n+1;i++){
        cin>>arr[i];
    }

    for(int i=0;i<2*n+1;i++){
        for(int j=0;j<2*n+1;j++){
            if(arr[i]==arr[j]){
                arr[i]=0;
                arr[j]=0;
            }
            else{
                cout<<"The unique element present is "<<arr[j];
                arr[j]=1;
                return 1;
            }
        }
    }
    return 0;
}
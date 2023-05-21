//write a c++ program to find the intersection of two arrays
//given that the two given arrays are sorted array in a non-decreasing manner
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of elements for first and second array: ";
    cin>>n>>m;
    int arr[100], brr[100];
    cout<<"Enter elements for first array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter elements for second array: ";
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }

    vector <int> ans;
    for(int i=0;i<n;i++){
        int element = arr[i];

        for(int j=0;j<m;j++){

            if(element==brr[j]){
                ans.push_back(element);
                arr[j]=INT_MIN;
                break;
            }

            else if(arr[i]<brr[j]){
                i++;
            }

            // else{
            //     j++;
            // }
        }
    }
    for(auto it=ans.begin();it!=ans.end();it++){
        cout<<*(it)<<" ";
    }
    return 0;
}
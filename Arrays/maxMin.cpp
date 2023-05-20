//Max and Min in an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0], min=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<"Max is: "<<max<<endl;
    cout<<"Min is: "<<min;

    return 0;
}
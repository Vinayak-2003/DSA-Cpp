#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int count=0,ele;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]==a[j]){
                count++;
                ele=a[i];
                break;
            }
        }
    }
    cout<<ele;

    return 0;
}
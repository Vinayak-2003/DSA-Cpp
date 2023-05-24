#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[33]={0};
    int x;
    cin>>x;
    int i=0;
    while(x!=0){
        arr[i]=x%2;
        x=x/2;
        i++;
    }
    for(int j=0;j<=31;j++){
        cout<<arr[j];
    }


    long long dec=0;
        for(int j=0;j<32;j++){
            dec = dec + arr[j] * pow(2 , 31-j);
        }
    cout<<endl<<dec;
    return 0;
}
//*******************STRINGS********************
#include<bits/stdc++.h>
using namespace std;
int main(){
    char name[20];
    cout<<"Enter your name ";
    cin>>name;
    cout<<"Your name is "<<name<<endl;          //IO->Vinayak  OP->Vinayak              IO->Vinayak Kanchan  OP->Vinayak

    // int arr[200],n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int len = sizeof(arr)/sizeof(arr[0]);
    // cout<<len;

    int count=0;                                        //length of a string
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    cout<<"Length: "<<count<<endl;

    int len=strlen(name);
    cout<<"Length using function: "<<len<<endl;

    char n[20];
    // cout<<"Enter something ";
    // cin>>n;
    // if(strcmp(name,n)){
    //     cout<<"Equal";
    // }
    // else{
    //     cout<<"Not equal";
    // }

    strcpy(n,name);
    cout<<"Copy element "<<n;

    return 0;
}
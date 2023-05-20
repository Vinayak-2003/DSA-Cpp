//write a c++ program for prime number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int flag=1;
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<"Not a prime number";
    }
    else{
        cout<<"prime number";
    }
    return 0;
}
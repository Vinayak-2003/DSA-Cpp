//check a number is a armstrong number or not
#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    int num=n;
    while(n!=0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==num){
        cout<<"Number is an armstrong number";
    }
    else{
        cout<<"Number is not an armstrong number";
    }
    return 0;
}
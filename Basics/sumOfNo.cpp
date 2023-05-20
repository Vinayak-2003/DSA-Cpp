//write a c++ program to find the sum of a Number
#include<iostream>
using namespace std;
int main(){
    int r,n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<"The sum of the number is "<<sum;
    return 0;
}
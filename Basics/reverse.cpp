//reverse a number and check palindrome
#include<iostream>
using namespace std;
int main(){
    int n,r,rev=0;
    cout<<"Enter a number: ";
    cin>>n;
    int num=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    cout<<"The reverse number is "<<rev<<endl;
    if(num==rev){
        cout<<"Number is a palindrome";
    }
    else{
        cout<<"Number is not a palindrome";
    }
    return 0;
}
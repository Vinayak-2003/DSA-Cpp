//write a c++ program to write fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n1=0,n2=1,n3,num;
    cout<<"Enter the number till you want to print the series: ";
    cin>>num;
    cout<<n1<<" "<<n2<<" ";
    for(int i=2;i<num;i++){
        n3=n1+n2;
        n1=n2;                  
        n2=n3;
        cout<<n3<<" ";
    }
    return 0;
}
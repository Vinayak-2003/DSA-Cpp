//write a c++ program to swap two numbers without a third variable
#include<iostream>
using namespace std;
int main(){
    int a=5,b=6;
    a=a+b;          //a=11
    b=a-b;          //b=5
    a=a-b;          //a=6

    cout<<a<<" "<<b;
    return 0;
}
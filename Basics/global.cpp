#include<iostream>
using namespace std;
int c=45;                                               //global variable 

int main(){
    //*******************built in data types*****************
    // int a,b,c;                                          //local variable
    // cout<<"Enter one number: "<<endl;
    // cin>>a;
    // cout<<"Enter second number: "<<endl;
    // cin>>b;
    // c=a+b;

    // cout<<"value of c local is "<<c<<endl;
    // cout<<"value of c global is "<<::c;                 //scope resolution operator '::'


    //*****************float, double and long double Literals************************
    // float d=34.4f;
    // long double e=34.4;

    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;               //by default 34.4 will be a Double variable 
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;             //float
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;             //long double
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    //********************Typecasting***********************
    //converting one data type to another data type

    int a=34;
    float b=66.54;
    cout<<int(b)<<endl;
    cout<<float(a)<<endl;
    cout<<a+b<<endl;
    cout<<a+int(b);
    return 0;
}
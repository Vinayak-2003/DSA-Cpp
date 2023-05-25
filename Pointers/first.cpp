//****************POINTERS********************
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int num = 5;
    // int *ptr = &num;

    // cout<<"Value is "<<*ptr<<endl;
    // cout<<"Address is "<<ptr<<endl;
    // cout<<"size of integer pointer is "<<sizeof(ptr)<<endl;

    // double d=4.6;
    // double *p = &d;
    // cout<<"Value is "<<*p<<endl;
    // cout<<"Address is "<<p<<endl;
    // cout<<"size of double pointer is "<<sizeof(p)<<endl;

    // int *e=0;                           //*e; (bad practice)
    // cout<<*e<<endl;
    // cout<<e;

    int num=6;
    int *p = &num;
    cout<<"Before "<<*p<<endl;
    (*p)++;
    cout<<"After "<<*p<<endl;
    cout<<"Number "<<num<<endl<<endl;                         //Number gets changed as the changes occur in the main pointer pointing to the element

    int n=5;
    int *ptr = &n;
    int a = *ptr;
    cout<<"Before "<<a<<endl;
    a++;
    cout<<"After "<<a<<endl;
    cout<<"Number "<<n<<endl<<endl;                           //Number doesnt affected because changes occur in a copy element


    //copying a pointer
    int *q=ptr;
    cout<<ptr<<" - "<<q<<endl;
    cout<<*ptr<<" - "<<*q<<endl<<endl;

    int i=9;
    int *t=&i;
    cout<<t<<endl;
    cout<<*t<<endl;
    (*t)++;
    cout<<t<<endl;
    cout<<*t<<endl;
    t++;
    cout<<t<<endl;
    cout<<*t<<endl;
    t=t+1;
    cout<<t<<endl;
    cout<<*t<<endl;
    (*t)=(*t)*4;
    cout<<t<<endl;
    cout<<*t<<endl;
    return 0;
}
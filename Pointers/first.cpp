//****************POINTERS********************
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 5;
    int *ptr = &num;

    cout<<"Value is "<<*ptr<<endl;
    cout<<"Address is "<<ptr<<endl;
    cout<<"size of integer pointer is "<<sizeof(ptr)<<endl;

    double d=4.6;
    double *p = &d;
    cout<<"Value is "<<*p<<endl;
    cout<<"Address is "<<p<<endl;
    cout<<"size of double pointer is "<<sizeof(p)<<endl;

    int *e=0;                           //*e; (bad practice)
    cout<<*e<<endl;
    cout<<e;

    return 0;
}
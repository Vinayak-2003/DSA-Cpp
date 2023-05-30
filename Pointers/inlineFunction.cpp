#include<bits/stdc++.h>
using namespace std;

inline int getMax(int& a , int& b){
    cout<<"function: "<<&a<<" "<<&b<<endl;
    return (a>b) ? a : b;
}

int main(){
    int a=1,b=2;
    cout<<"main: "<<&a<<" "<<&b<<endl;
    // if(a>b){
    //     cout<<a;
    // }
    // else
    //cout<<b;
    a = a+3;
    b = b+1;
    cout<<getMax(a,b);
    return 0;
}
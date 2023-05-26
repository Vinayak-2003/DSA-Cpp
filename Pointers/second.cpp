#include<bits/stdc++.h>
using namespace std;

void print(int *p){
    cout<<p<<" "<<*p<<" "<<&p<<endl;
}

void update(int *p){
    p=p+1;
    (*p)++;
    cout<<"Inside "<<p<<" "<<*p<<endl;
}

int getSum(int arr[] , int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + *(arr+i);
    }
    return sum;
}

int main(){
    //****************************Array Pointers************************

    /*
    int arr[10]={2,5,8};
    cout<<"Address is "<<arr<<endl;
    cout<<"Address is "<<&arr[0]<<endl;
    cout<<"value at first is "<<*arr<<endl;
    cout<<"Address of 6 is "<<&arr[5]<<endl;
    cout<<"value of *arr+1 is "<<*arr + 1<<endl;
    cout<<"value of *(arr)+1 is "<<*(arr) + 1<<endl;
    cout<<"value of *(arr+1) is "<<*(arr+1)<<endl;
    cout<<"value of *(arr+5) is "<<*(arr+5)<<endl<<endl;

    int A[10]={46,122,67,89};
    cout<<A[2]<<" "<<*(A+2)<<endl;
    cout<<2[A]<<" "<<*(A + 2)<<endl<<endl;

    // for(int i=0;i<10;i++){
    //     cout<<*(A+i)<<" "<<&A[i]<<endl;
    // }

    int *p=&arr[1];
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(&arr[0])<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(&p)<<endl;
    cout<<sizeof(A)<<endl;
    cout<<sizeof(*A)<<endl;
    cout<<sizeof(&A)<<endl;
    

    int temp[10]={1,2,3,5};
    cout<<temp<<endl;
    cout<<"--> "<<&temp[0]<<endl;
    cout<< *temp<<endl;

    int *q = &temp[0];
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<"--> "<<&q<<endl;
    */


    //********************Character Array Pointers********************
    /*
    char C[6] = "abcde";
    char *ch = &C[1];
    cout<<C<<endl;
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<*ch<<endl;
    cout<<&ch + 1<<" "<<*(ch+1)<<endl;
    cout<<&ch + 2<<endl;
    cout<<*(ch+1)<<endl;
    cout<<sizeof(C)<<endl;
    cout<<sizeof(&ch)<<endl;
    */


    //********************Pointer in a Function************************
    int value = 5;
    int *p = &value;
    //print(p);
    cout<<"Before "<<p<<" "<<*p<<endl;
    update(p);
    cout<<"After "<<p<<" "<<*p<<endl;

    int arr[7]={1,2,3,4,5,8};
    cout<<"Sum is "<<getSum(arr , 5)<<endl;
    cout<<"Sum iss "<<getSum(arr+3 , 3)<<endl;                  //benefit is we can traverse from any other element till we want

    return 0;
}
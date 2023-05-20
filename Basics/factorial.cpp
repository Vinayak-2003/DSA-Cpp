//write a c++ program for factorial of a number
#include<iostream>
using namespace std;
int main(){
    int n,f;
    cout<<"Enter a number: ";
    cin>>n;
    f=n;                            //so that the original value must not lost while multiplying in loop
    for(int i=1;i<n;i++){           //loop till 'n'
        f=f*i;                      
    }
    cout<<"Factorial of "<<n<<" is "<<f;
    return 0;
}
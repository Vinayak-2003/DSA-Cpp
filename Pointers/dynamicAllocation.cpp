#include<bits/stdc++.h>
using namespace std;

int& func(int a){
    int num=a;
    int& ans=num;
    cout<<ans<<" "<<num<<" "<<&ans<<" "<<&num<<endl;
    return ans;
}

int* fun(int a){
    int *ptr=&a;
    return ptr;
}

int main(){
    int i=5;
    int &j=i;                               //reference variable
    int k=i;
    cout<<i<<" "<<j<<" "<<k<<endl;
    cout<<&i<<" "<<&j<<" "<<&k<<endl;
    i++;
    cout<<i<<" "<<j<<" "<<k<<endl;
    j++;
    cout<<i<<" "<<j<<" "<<k<<endl;
    k++;
    cout<<i<<" "<<j<<" "<<k<<endl;
    cout<<&i<<" "<<&j<<" "<<&k<<endl<<endl;


    int n=6;
    func(n);
    cout<<n<<" "<<&n<<endl;

    int m=6;
    fun(m);
    cout<<n<<" "<<&n<<endl;

    return 0;
}
//***************Values passing through pointers******************
#include<bits/stdc++.h>
using namespace std;

//************using reference variable**************
void update2(int &n){
    cout<<"Pass by Reference: "<<&n<<endl;
    n++;
}

//***********simply passing the value***************
void update(int n){
    cout<<"Pass by value: "<<&n<<endl;
    n++;
}

int main(){
    int i=5;
    cout<<"Before: "<<i<<" "<<&i<<endl;
    update(i);
    cout<<"After: "<<i<<" "<<&i<<endl;
    update2(i);
    cout<<"After After: "<<i<<" "<<&i<<endl;

    int *i = new int;
    cout<<&i<<" "<<sizeof(i)<<endl;

    int* arr = new int[5];                      //dynamically store an array
    cout<<arr<<" "<<arr+1<<" "<<*(arr)<<" "<<*(arr+1);



    return 0;
}
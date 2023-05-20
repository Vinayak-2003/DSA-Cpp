//***************Lists***************
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> lst;

    lst.push_back(5);
    lst.emplace_back(10);

    lst.push_front(100);
    lst.emplace_front(200);
    for(list<int>::iterator it=lst.begin();it!=lst.end();it++){
        cout<<*(it)<<" ";
    }


    //rest functions same as vectors
    return 0;
}
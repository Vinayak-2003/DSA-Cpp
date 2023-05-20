//****************CONTAINER*********************
//********PAIRS***********

#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int , char> p = {1,'a'};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int , pair<int , float>> q = {1,{5,0.1}};
    cout<<q.second.second<<" "<<q.first<<endl;

    pair<int,int> arr[]={{1,2},{5,3},{9,5}};
    cout<<arr[1].second;

    return 0;
}
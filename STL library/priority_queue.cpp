//**************Priority Queue**************
#include<bits/stdc++.h>
using namespace std;
int main(){
    //default
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(19);

    cout<<pq.top()<<endl;
    
    pq.pop();
    cout<<pq.top()<<endl;

    //minimum heap
    priority_queue<int, vector<int>, greater<int>> pqe;
    pqe.push(5);
    pqe.push(2);
    pqe.push(8);
    pqe.emplace(19);

    cout<<pqe.top()<<endl;

    pqe.pop();
    cout<<pqe.top()<<endl;

    return 0;
}
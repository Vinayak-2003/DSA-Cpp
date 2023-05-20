//***************Map******************
#include<bits/stdc++.h>
using namespace std;
int main(){
    map <int,int> mp;          //(key,value)
    map <int, pair<int,int>> mpp;
    map <pair<int,int>, int> mppp;

    mp[1]=2;
    mp.insert({3,1});
    mp.insert({2,5});

    cout<<mp[3]<<" "<<mp[1]<<endl;

    auto it=mp.find(2);
    //cout<<*(it).second;
    return 0;
}
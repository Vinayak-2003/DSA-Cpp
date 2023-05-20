//*********************VECTORS***************************
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);             //push any value
    v.emplace_back(2);          //push any value faster tha push_back
    v.push_back(7);
    cout<<v[2]<<endl;

    vector<pair<int,int>> vec;
    vec.push_back({3,5});
    cout<<vec[0].second<<endl;

    vector<int> ve(5,100);          //push same value multiple times
    cout<<ve[2]<<endl;

    vector <int> s(5);
    cout<<s[2]<<endl;

    s.push_back(2);
    cout<<s[5];
    return 0;
}
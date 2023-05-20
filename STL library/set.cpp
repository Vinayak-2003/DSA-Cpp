//****************Set******************
#include<bits/stdc++.h>
using namespace std;
int main(){
    set <int> st;

    st.insert(1);
    st.emplace(2);
    st.insert(9);
    st.insert(4);
    st.insert(2);
    st.insert(3);

    set<int>::iterator it=st.find(3);
    for(auto it=st.begin();it!=st.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    auto i=st.find(9);
    st.erase(3);                                    //deleteing an element
    for(auto itt=st.begin();itt!=st.end();itt++){
        cout<<*(itt)<<" ";
    }
    cout<<endl;

    cout<<st.count(2)<<endl;

    st.insert(5);
    st.insert(7);
    st.insert(3);
    st.insert(10);
    st.insert(0);
    for(auto j=st.begin();j!=st.end();j++){
        cout<<*(j)<<" ";
    }
    cout<<endl;

    //delete multiple elements
    auto it1=st.find(3);
    auto it2=st.find(7);
    st.erase(it1,it2);
    for(auto k=st.begin();k!=st.end();k++){
        cout<<*(k)<<" ";
    }
    cout<<endl;

//**************Multi Set*******************
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.emplace(1);
    ms.insert(3);
    ms.insert(3);
    ms.insert(7);
    ms.insert(11);

    for(auto a=ms.begin();a!=ms.end();a++){             //printing all elements
        cout<<*(a)<<" ";
    }
    cout<<endl;

    ms.erase(3);                                        //deleting all occurence of an element
    for(auto b=ms.begin();b!=ms.end();b++){
        cout<<*(b)<<" ";
    }
    
    return 0;
}
//*************Stack***************
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(3);
    st.push(5);
    st.push(7);
    st.emplace(9);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty();

    return 0;
}
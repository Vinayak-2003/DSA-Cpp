//You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing 
//two adjacent and equal letters and removing them.
//We repeatedly make duplicate removals on s until we no longer can.
//Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

#include<bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){
    string ans = "";
    ans.push_back(s[0]);                            //starting with storing first element 

    for(int i=1;i<s.length();i++){                  //traverse from second element
        if(s[i]==ans.back()){                       //if string vale == ans strings last value that was pushed
            ans.pop_back();                         //pop element
        }
        else{
            ans.push_back(s[i]);                    //else push the elements
        }
    }
    return ans;
}

int main(){
    string st;
    cout<<"Enter a string: ";
    cin>>st;

    cout<<"Final string after removal of duplicate elements is: "<<removeDuplicate(st);

    return 0;
}
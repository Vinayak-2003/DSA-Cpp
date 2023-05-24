#include<bits/stdc++.h>
using namespace std;

int compression(string s){
    int i=0,ansIndex = 0;
    int n=s.size();
    while(i<n){
        int j=i+1;
        while(j<n && s[i]==s[j]){
            j++;
        }
        //when j complets the traverse to n or when new/different element is encountered

        s[ansIndex++] = s[i];
        int count = j-i;
        if(count > 1){
            string cnt = to_string(count);
            for(char ch: cnt){
                s[ansIndex++] = ch;
            }
        }
        i=j;
    }
    return ansIndex;
}

int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    
    cout<<compression(str);

    return 0;
}
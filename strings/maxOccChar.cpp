//write a c++ program to return the character which occurs maximum times in a string
//approach:
//define an array for all 26 letters of the alphabet and assign the value fot all places with '0'
//increase the value of arr[i] where that element is stored
//the element which has maximum value in that array will be the maximum occuring letter 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    cout<<s.length();
    int arr[26]={0};

    for(int i=0;i<s.length();i++){
        char ch = s[i];

        int number=0;
        if(ch>='a' && ch<='z'){                 //lower case
            number = ch - 'a';
        }
        else{                                   //upper case
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalAns = 'a' + ans;
    cout<<finalAns;

    return 0;
}
//write a c++ program to check whether the entered string is a palindrome or not
//approach 1 is by making an extra reverse string which takes extra space
//spproach 2 is by comparing the string array starting characters by ending characters
#include<bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){                          //function to convert any upper case to lower case 
    if(ch>='a' && ch<='z'){
        return 0;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int main(){
    char name[100];
    cout<<"Enter a string: ";
    cin>>name;
    
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    
    int start=0;
    int end=count-1;
    while(start<=end){
        if(toLowerCase(name[start]) != toLowerCase(name[end])){
            cout<<"string is not Palindrome";
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    cout<<"String is palindrome";

    return 0;
}
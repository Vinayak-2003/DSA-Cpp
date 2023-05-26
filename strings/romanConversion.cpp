#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    char c,d;
    int sum=0;
    for(int i=0;i<s.length();i++){
        c = s[i];
        d = s[i+1];
        cout<<c<<" "<<d<<endl;
        // if(c=='I' && d=='V' && c>d){
        //     sum=sum+4;
        // }
        // else if(c=='I' && d=='X' && c>d){
        //     sum=sum+9;
        // }
        // else if(c=='X' && d=='L' && c>d){
        //     sum=sum+40;
        // }
        // else if(c=='X' && d=='C' && c>d){
        //     sum=sum+90;
        // }
        // else if(c=='C' && d=='D' && c>d){
        //     sum=sum+400;
        // }
        // else if(c=='C' && d=='M' && c>d){
        //     sum=sum+900;
        // }
        if(c == 'I'){
            if(d=='V'){
                sum=sum+4;
            }
            else if(d=='X'){
                sum=sum+9;
            }
            else{
                sum = sum+1;
            }
        }
        else if(c == 'V'){
            sum = sum+5;
        }
        else if(c == 'X'){
            if(d=='L'){
                sum=sum+40;
            }
            else if(d=='C'){
                sum=sum+90;
            }
            else{
                sum = sum+10;
            }
        }
        else if(c == 'L'){
            sum = sum+50;
        }
        else if(c == 'C'){
            if(d=='D'){
                sum=sum+400;
            }
            else if(d=='M'){
                sum=sum+900;
            }
            else{
                sum = sum+100;
            }
        }
        else if(c == 'D'){
            sum = sum+500;
        }
        else if(c == 'M'){
            sum = sum+1000;
        }
    }
    return sum;
}


int main(){
    string s;
    cin>>s;
    cout<<romanToInt(s);

    return 0;
}
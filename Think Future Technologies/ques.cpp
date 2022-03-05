// string str= "bh1o3o9mi4k7k6";
// Please write a program in c or c++ to get the sum of all integers in this given string
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sum = 0; 
    for(int i=0; i<s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            sum += (int)s[i]-48;
        }
    } 
    cout << sum ;
}
#include <iostream>
#include <string>
using namespace std;

string convertNumericString(string s){
    string str = "";
    for(int i=0; i<s.length(); i++){
        if(s[i]>=48 && s[i]<=56){
            str += to_string(i);
        }
    }
    return str;
}

int main(){
    string s1;
    // cout << char(1);
    cout << to_string(0) << endl;
    cin >> s1;
    cout << convertNumericString(s1);
    return 0;
}
#include <iostream>

using namespace std;

string stringChallenge(string s){
    int c1=0, c2=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z')
            c1++;
    }
    for(int i=1; i<s.length()-1; i++){
        if(s[i]>='a' && s[i]<='z' && s[i-1]=='+' && s[i+1]=='+')
            c2++;
    }
    if(c1 == c2)
        return "true";
    return "false";
}

int main(){
    string s;
    cin >> s;
    cout << stringChallenge(s);
    return 0;
}
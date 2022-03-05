/*
Rules for username
1. The username is between 4 and 25 characters.
2. It must start with a letter.
3. It can only contain letters, numbers, and the underscore character.
4. It cannot end with an underscore character.

Input:  "aa_"
Output: false

Input:  "u__hello_world1234"
Output: true
*/

#include <iostream>

using namespace std;

string searchingChallenge(string s){

    bool check = false;

    if(!(s.length()>3 && s.length()<26))
        return "false";

    if(!(s[0] >= 'a' && s[0] <='z'))
        return "false";
    
    if(!(s[s.length()-1] != '_'))
        return "false";

    for(int i=1; i<s.length()-1; i++){
        if( !( (s[i]>='a' && s[i]<='z') || (s[i]>=48 && s[i]<=57) || (s[i]=='_') ) )
            return "false";
    }

    return "true";
}

int main(){
    string s;
    cin >> s;
    cout << searchingChallenge(s);
    return 0;
}
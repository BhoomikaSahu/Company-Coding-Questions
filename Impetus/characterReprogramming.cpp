// RURRRDDDLDL
// 6

// _________________________
// |___|___|___|___|___|___|
// |___|___|_->|_->|_->|___|
// |_*_|_->|_'_|___|_'_|___|
// |___|___|___|___|_'_|___|
// |___|___|___|<-_|_'_|___|
// |___|_*_|<-_|_'_|___|___|
// |___|___|___|___|___|___|


#include <iostream>
using namespace std;

int numberOfDeletedCharacters(string s){
    int delChar=0;
    for(int i=0; i<s.length(); i++){
        for(int j=i; j<s.length(); j++){
            if((s[i]=='D' && s[j]=='U') || (s[i]=='U' && s[j]=='D')){
                s[i] = '-';
                s[j] = '-';
                delChar += 2;
            }
            else if((s[i]=='L' && s[j]=='R') || (s[i]=='R' && s[j]=='L')){
                s[i] = '-';
                s[j] = '-';
                delChar += 2;
            }
        }
    }
    //cout << s << endl;
    return delChar;
}

int main(){
    string s;
    cin >> s;
    cout << numberOfDeletedCharacters(s);
    return 0;
}
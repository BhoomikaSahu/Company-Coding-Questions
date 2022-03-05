#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string sort_s, s;
    cin >> s >> sort_s;
   
    for(int i=0; i<sort_s.length(); i++){

        for(int j=0; j<s.length(); j++){
            
            if(tolower(sort_s[i]) == tolower(s[j])){
                cout << s[j];
            }
        }
    }  
    return 0;
}
#include <iostream>

using namespace std;

int findIndex(string str){
    int index = 0;
    for(int i = str.length()-1; i>0; i--){
        if(str[0] =='(' && str[str.length()-1] == ')')
            if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%'){
                    index = i;
                    return index;
            }
    }
    return index;
}

int main()
{
    string str;
    cin >> str;
    cout<<findIndex(str);

    return 0;
}
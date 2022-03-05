#include <bits/stdc++.h>
using namespace std;
int maxUniqueStrings(int n, int k, string s){
    string arr[k+1];
    arr[0] = s;
    int i=0, j=1, c=1, len=k+1, count=0;
    while(k--){
        string copy = s;
        char temp = copy[i];
        copy[i] = copy[j];
        copy[j] = temp;
        arr[c++] = copy;
        j++;
        
        if(j >= n){
            i++;
            j=1;
        }
        if(i >= n)
            i=0;
    }
    // for(int i=0; i<len; i++) 
    //     cout << arr[i] << " ";
    for(int i=0; i<len; i++){
        bool flag = true;
        for(int j=i-1; j>=0; j--){
            if(arr[i] == arr[j]){
                flag = false;
                break;
            }
        }
        if(flag == true)
            count++; 
    }
    return count;
}
int main(){
    int k;
    cin >> k;
    string s;
    cin >> s;
    int result = maxUniqueStrings(s.length(), k, s);
    cout << result;
}
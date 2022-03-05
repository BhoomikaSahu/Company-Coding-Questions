#include <bits/stdc++.h>
using namespace std;
int maxUniqueResults(int n, string s1, string s2){
    string str1;

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
    int n, i1, i2;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int result = maxUniqueResults(n, s1, s2);
    cout << result;
}
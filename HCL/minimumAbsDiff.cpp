#include <iostream>
#include <bits/stdc++.h>
using  namespace std;

int absDiff(int arr[], int n){
    int diff = INT_MAX;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(abs(arr[i] - arr[j]) < diff)
                diff = abs(arr[i] - arr[j]);
    return diff;
}

void sortNumbers(int arr[], int n){
    int diff = absDiff(arr, n);
    sort(arr, arr+n);
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(abs(arr[i] - arr[j]) == diff)
                cout << arr[i] << " " << arr[j] << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sortNumbers(arr, n);
    return 0;
}
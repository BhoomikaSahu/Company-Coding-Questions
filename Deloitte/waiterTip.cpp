#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sum(int a[], int n){
    int sum=0;
    sort(a, a+n);
    sum = a[1] + a[n-2];
    return sum;
    // int small=a[0], large=a[0], s=0, l=0;
    // for(int i=0; i<n; i++){
    //     if(a[i] < small){
    //         small = a[i];
    //         s = i;
    //     }
    //     if(a[i] > large){
    //         large = a[i];
    //         l = i;
    //     }
    // }
    // if(s == 0)
    //     s = n-1;
    // else
    //     s = s-1;
        
    // if(l == n-1)
    //     l = 0;
    // else
    //     l = l+1;
        
    // sum = a[s] + a[l];

}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    // for(int i=0; i<n; i++){
    //     cout << a[i] << " ";
    // }
    cout<<sum(a, n);

    return 0;
}

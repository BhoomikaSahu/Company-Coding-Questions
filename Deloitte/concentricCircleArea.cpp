

#include <bits/stdc++.h>
using namespace std;

int radius(int r[], int n, int x, int y){
    sort(r, r+n);
    float xthRadius = 3.14*r[n-x]*r[n-x];
    float ythRadius = 3.14*r[y-1]*r[y-1];
    float ans = xthRadius - ythRadius;
    return ans;
}

int main(){
    int n, x, y;
    cin >> n;
    int r[n];
    for(int i=0; i<n; i++)
        cin >> r[i];
    cin >> x >> y;
    cout << radius(r, n, x, y);
}
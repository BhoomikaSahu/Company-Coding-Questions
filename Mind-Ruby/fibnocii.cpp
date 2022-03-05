#include <iostream>
using namespace std;

int main()
{
    int a, n;
    cin >> a >> n; 
    int fnum = 0, snum = 1, sum = 0;
    for(int i=1; i<=n;)
    {
        if(sum >= a){
            cout << sum << " ";
            i++;
        }
        sum = fnum + snum;
        fnum = snum;
        snum = sum;
    }
    return 0;
}
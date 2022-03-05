/**/

#include <iostream>
using namespace std;

void swap_ele(int *a, int *b){
    int temp = *a;
    *a = *b; 
    *b = temp;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<=n; i=i+2)
        if(arr[i] > arr[i+1])
            swap_ele(&arr[i], &arr[i+1]);
    
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}

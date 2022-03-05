#include <iostream>
using namespace std;

void read(int arr[], int n){
    for(int i=0; i<n; i++)
        cin >> arr[i];
}

void swapEle(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int sumOfLargestFour(int arr[], int n){
    int sum=0;
    if(n < 5)
        for(int i=0; i<n; i++)
            sum += arr[i]; 
    else
	    for(int i = 0; i < 4; i++){
	        for(int j = 0; j < n-1-i; j++)
	    	    if(arr[j+1] < arr[j]){
	    		swapEle(&arr[j+1], &arr[j]);
			}
        }
        for(int i=n-1; i>n-5; i--)
            sum += arr[i];
    return sum;
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    read(arr, n);
    cout << sumOfLargestFour(arr, n);
}

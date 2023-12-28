#include<iostream>

using namespace std;

int arr[101];
int n;
int sum = 0;
int temp = 0;
int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    while(--n){
        if(arr[n] <= arr[n - 1]){
            temp = arr[n - 1]; 
            arr[n - 1] = arr[n] - 1;
            sum += temp - arr[n - 1];
        }
    }

    cout << sum;

    return 0;
}
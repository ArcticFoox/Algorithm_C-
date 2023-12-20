#include<iostream>
#include<algorithm>

using namespace std;

int n;
int arr[100001];

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = max(sum, arr[n - i] * i);
    }

    cout << sum;

    return 0;
}
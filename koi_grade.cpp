#include<iostream>
#include<algorithm>

using namespace std;

int arr[500001];
int n;
long long answer = 0;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    for(int i = 0; i < n; i++){
        answer += abs(arr[i] - (i + 1));
    }
    
    cout << answer;
    return 0;   
}
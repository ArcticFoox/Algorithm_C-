#include<iostream>

using namespace std;

int t;
int n;
int arr[1000000];

int main(){
    cin >> t;

    while(t--){
        cin >> n;
        long long sum = 0;
        int Max = -1;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = n - 1; i >= 0; i--){
           Max = max(Max, arr[i]); //앞과 비교할 필요없이 큰값인지 판단하면 끝
           sum += Max - arr[i];
        }

        cout << sum << '\n';
    }
    return 0;
}
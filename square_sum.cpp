#include<iostream>

using namespace std;

int dp[100005];
int n;
int square = 1;

int main(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        dp[i] = i;
        for(int j = 1; j*j <= i; j++){  //모든 경우를 생각해야 함 어느 한쪽만 확정하지 말도록
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

    cout << dp[n];
    return 0;
}
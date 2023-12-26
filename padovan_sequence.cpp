#include<iostream>

using namespace std;

int dp[101];

int main(){
    int t;

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        for(int i = 6; i <= n; i++){
            dp[i] = dp[i - 1] + dp[i - 5];
        }

        cout << dp[n] << '\n';

    }
    return 0;
}
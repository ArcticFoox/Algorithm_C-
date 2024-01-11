#include<iostream>

using namespace std;

int t[1500005];
int p[1500005];
int n;
long long dp[1500005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> t[i] >> p[i];
    }

    for(int i = n; i >= 1; i--){
        if(i + t[i] - 1 > n){
            dp[i] = dp[i + 1];
            continue;
        }
        dp[i] = max(dp[i + t[i]] + p[i], dp[i + 1]);
    }

    cout << dp[1];
    return 0;
}
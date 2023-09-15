#include<iostream>

using namespace std;

int dp[100];

int fibo(int n){
    if(n == 1) return 1;
    if(n == 2) return 1;
    if(dp[n] != 0){
        return dp[n];
    }
    
    return dp[n] = fibo(n - 1) + fibo(n - 2);
}

int main(){
    
    int n, answer;
    
    cin >> n;
    
    answer = fibo(n);
    
    cout << answer;
    
    return 0;
}
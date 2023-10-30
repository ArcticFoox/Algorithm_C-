#include<iostream>

using namespace std;

int main(){
    int N;
    int dist[100001];
    int cost[100001];
    long long result = 0;
    long long cur;

    cin >> N;
    
    for(int i = 1; i < N; i++){
        cin >> dist[i];
    }

    for(int i = 1; i <= N; i++){
        cin >> cost[i];
    }

    cur = cost[1];

    for(int i = 1; i < N; i++){
        if(cost[i] < cur){
            cur = cost[i];
        }
        result += (long long)cur * (long long)dist[i];
    }
    cout << result;

    return 0;
}
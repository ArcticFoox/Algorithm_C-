#include<iostream>

using namespace std;

int arr[9] = {0, };
bool use[9] = {0, };
int N, M;

void dfs(int col){
    if(col == M){
        for(int i = 0; i < M; i++){
            cout << arr[i] << " ";
        }
        cout << '\n';
        return;
    }
    
    for(int i = 1; i <= N; i++){
        if(!use[i]){
            arr[col] = i;
            use[i] = true;
            dfs(col + 1);
            use[i] = false;
        }
    }
}

int main(){
    cin >> N >> M;
    dfs(0);
    return 0;
}
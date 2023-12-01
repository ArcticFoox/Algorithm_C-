#include<iostream>
#include<stack>

using namespace std;

int arr[6][6];
bool visited[6][6];
int R, C, K;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int cnt = 0;
stack<pair<int, int> > s;

void dfs(int x, int y, int move){
    if(x == 0 && y == C - 1){
        if(move == K){
            cnt++;
        }
        return;
    }
    visited[x][y] = true;
    s.push(make_pair(x, y));

    while(!s.empty()){
        int cx = s.top().first;
        int cy = s.top().second;
        s.pop();

        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
            if(arr[nx][ny] == 1 || visited[nx][ny]) continue;
            visited[nx][ny] = 1;
            dfs(nx, ny, move + 1);
            visited[nx][ny] = 0;
        }
    }
}

int main(){
    cin >> R >> C >> K;

    for(int i = 0; i < R; i++){
        string str;
        cin >> str;
        for(int j = 0 ; j < C; j++){
            if(str[j] == '.') arr[i][j] = 0;
            else arr[i][j] = 1;
        }
    }

    dfs(R - 1, 0, 1);

    cout << cnt;

    return 0;
}
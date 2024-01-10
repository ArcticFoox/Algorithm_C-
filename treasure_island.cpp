#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

char arr[50][50];
int visited[50][50];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int Max_dis = 0;
int n, m;

int bfs(int x, int y){
    int count = 0;
    queue<pair<int, int> > q;
    q.push(make_pair(x, y));
    visited[x][y] = 1;
    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(arr[nx][ny] == 'L' && !visited[nx][ny]){
                q.push(make_pair(nx, ny));
                visited[nx][ny] = visited[cx][cy] + 1;  // tomato 문제 풀 때 쓴 방법 확산할 때 사용함 기억할 것
                count = max(count, visited[nx][ny] - 1);
            }
        }
    }

    return count;
}

void reset(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            visited[i][j] = 0;
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        for(int j = 0; j < m; j++){
            arr[i][j] = str[j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 'L' && !visited[i][j]){
                Max_dis = max(Max_dis, bfs(i, j));
            }
            reset();
        }
    }
    cout << Max_dis;
    return 0;
}
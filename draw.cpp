#include<iostream>
#include<queue>

using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int visited[502][502] = {0, };
int arr[502][502] = {0, };
queue< pair<int, int> > q;
int n, m;
int max_cnt = 0;

int bfs(int x, int y){
    int cnt = 1;
    visited[x][y] = 1;
    q.push(make_pair(x, y));
    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;

        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx < 0 || ny < 0 || nx > n || ny > m) continue;

            if(!visited[nx][ny] && arr[nx][ny]){
                q.push(make_pair(nx, ny));
                visited[nx][ny] = 1;
                cnt++;
            }
        }
    }

    if(max_cnt < cnt){
        max_cnt = cnt;
    }

    return cnt;
}

int main(){
    int draw_cnt = 0;
    
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!visited[i][j] && arr[i][j]){
                bfs(i, j);
                draw_cnt++;
            }
        }
    }

    cout << draw_cnt << "\n" << max_cnt;

    return 0;
}
#include<vector>
#include<queue>
using namespace std;

int solution(vector<vector<int>> maps)
{
    int dx[4] = {0, -1, 0, 1};
    int dy[4] = {1, 0, -1, 0};
    int visited[101][101] = {0, };
    int answer = 0;
    int N = maps[0].size();
    int M = maps.size();
    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    visited[0][0] = 1;
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if((nx >= 0 && nx < M) && (ny >= 0 && ny < N)){
                if(maps[nx][ny] == 1){
                    if(!visited[nx][ny]){
                        q.push(make_pair(nx, ny));
                        visited[nx][ny] = visited[x][y] + 1;
                    }
                }
            }
        }
    }
    
    if(!visited[M-1][N-1]) answer = -1;
    else answer = visited[M-1][N-1];
    
    return answer;
}
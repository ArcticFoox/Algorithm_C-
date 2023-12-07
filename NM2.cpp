#include<iostream>

using namespace std;

int N, M;
int arr[9];
bool visited[9];


void back(int num, int row){
    if(row == M){
        for(int i = 0; i < M; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = num; i <= N; i++){
        if(!visited[i]){
            visited[i] = true;
            arr[row] = i;
            back(i + 1, row + 1);
            visited[i] = false;
        }
    }
}

int main(){
    cin >> N >> M;
    back(1, 0);
    return 0;
}
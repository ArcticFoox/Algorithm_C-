#include <iostream>

using namespace std;

int arr[16][16];
int loc[16];
int N;
int cnt = 0;

void queen(int row){
    if(row == N){ //종료 조건
        cnt++;
        return;
    }

    else{
        for(int i = 0; i < N; i++){
            loc[row] = i;
            bool flag = true;
            for(int j=0; j < row; j++){
                if(loc[row] == loc[j] || abs(loc[row] - loc[j]) == (row - j)){ //한정조건
                    flag = false;
                    break;
                    //위쪽에 위치한 퀸가의 충돌여부 확인
                    //처음 시도 때 이 방법을 생각하지 못해 모든 위치를 확인함
                    //이 방법을 알게 되어 loc을 1차원으로 줄이고 식이 간편해짐
                } 
            }
            if(flag) queen(row + 1);
        }
    }
    
}

int main(){

    cin >> N;
    queen(0);
    cout << cnt;
    
    return 0;
}
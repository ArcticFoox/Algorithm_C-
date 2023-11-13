#include<iostream>
#define MAX 100000L

using namespace std;

int m[3][3] = {
   {1, 5, 3},
   {2, 5, 7},
   {5, 3, 5}
};
bool check[3] = {false, false, false};
int minium = MAX;

void backtracking(int row, int score){
    if(row == 3){
        if(score < minium) minium = score;
        return;
    }
    
    for(int i = 0; i < 3; i++){
        if(!check[i]){
            check[i] = true;
            backtracking(row + 1, score + m[row][i]);
            check[i] = false;
        }
    }
    return;
}

int main(){
    backtracking(0, 0);
    cout << minium;
    return 0;
}
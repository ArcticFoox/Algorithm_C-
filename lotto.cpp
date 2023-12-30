#include<iostream>

using namespace std;

int k;
int arr[14];
int lotto[6];


void dfs(int start, int end){
    if(end == 6){
        for(int i = 0; i < 6; i++){
            cout << lotto[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = start; i < k; i++){
        lotto[end] = arr[i];
        dfs(i + 1, end + 1);
    }
}


int main(){

    while(true){
        
        cin >> k;

        if(!k){
            break;
        }

        for(int i = 0; i < k; i++){
            cin >> arr[i];
        }
        dfs(0, 0);
        cout << "\n";
    }
    return 0;
}
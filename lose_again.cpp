#include<iostream>

using namespace std;

int j[9];
int g[9];
int flag;
int j_sum;
int g_sum;

int main(){
    for(int i = 0; i < 9; i++){
        cin >> j[i];
    }
    
    for(int i = 0; i < 9; i++){
        cin >> g[i];
    }

    for(int i = 0; i < 9; i++){
        j_sum += j[i];
        if(j_sum > g_sum) flag = 1;
        g_sum += g[i];
        if(j_sum < g_sum && flag == 1) flag = 2;
    }

    if(flag == 2){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int l, c;
char arr[16];
string str;

void dfs(int num, int row){
    if(row == l){
        int g_cnt = 0;
        int c_cnt = 0;
        for(int i = 0; i < l; i++){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u'){
                    g_cnt++;
                }
            else{
                c_cnt++;
            }
        }
        if(g_cnt >= 1 && c_cnt >= 2){
            cout << str << '\n';
        }
        return;
    }

    for(int i = num; i < c; i++){
        str += arr[i];
        dfs(i + 1, row + 1);
        str.pop_back();
    }
}

int main(){
    cin >> l >> c;

    for(int i = 0; i < c; i++){
        cin >> arr[i];
    }
    sort(arr, arr+c);
    dfs(0, 0);

    return 0;
}
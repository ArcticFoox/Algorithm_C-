#include<iostream>
#include<vector>

using namespace std;

string str;
int n, k, cnt = 0;

int main(){
    cin >> n >> k;
    cin >> str;

    for(int i = 0; i < n; i++){
        if(str[i] == 'P'){
            for(int j = i - k; j <= i + k; j++){
                if(0 <= j && j < n && str[j] == 'H'){
                    cnt++;
                    str[j] = 'X';
                    break;
                }
            }
        }
    }

    cout << cnt;
    
    return 0;
}
#include<iostream>

using namespace std;

int main(){
    int arr[101][101];
    int n;
    string str;
    int r_count = 0, c_count = 0;
    int row = 0, col = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> str;

        for(int j = 0; j < str.size(); j++){
            
            if(str[j] == '.') arr[i][j] = 0;
            else arr[i][j] = 1;
        }
    }

    for(int i = 0; i < n; i++){
        r_count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 0) r_count++;

            if(arr[i][j] == 1){
                if(r_count >= 2) row++;
                r_count = 0;
            }
        }
        if(r_count >= 2) row++;
    }

    for(int i = 0; i < n; i++){
        c_count = 0;
        for(int j = 0; j < n; j++){
            if(arr[j][i] == 0) c_count++;

            if(arr[j][i] == 1){
                if(c_count >= 2) col++;
                c_count = 0;
            }
        }
        if(c_count >= 2) col++;
    }

    cout << row << " " << col << '\n';

    return 0;
}
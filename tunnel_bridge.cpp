#include<iostream>

// using namespace std;

// bool arr[100001];

// int main(){
//     int n, m;
//     int s_cnt = 0, s_max = 0;
//     cin >> n;
//     cin >> m;

//     for(int i = 0; i < m; i++){
//         int num;
//         cin >> num;
//         arr[num] = 1;
//     }
    
//     for(int i = 0; i <= n; i++){

        
//         if(arr[i]){
//             if(!(--m)){
//                s_max = max(s_max, n - i);
//             }
//             if(s_cnt > s_max){
//                 s_max = s_cnt;
//                 s_cnt = 0;
//             }
//         }
//         else{
//             s_cnt++;
//         }

//     }

//     cout << s_max;

//     return 0;
// }

using namespace std;

int bridge_len;
int lamp_cnt;
int lamp_position[100001];

void input(){
    cin >> bridge_len >> lamp_cnt;
    for(int i = 0; i < lamp_cnt; i++) {
        cin >> lamp_position[i];
    }
}

void solution() {
    int result = 1;
    for(int i = 0; i < lamp_cnt; i++) {
        if (i == 0) {
            result = max(result, lamp_position[i]);
        }
        else {
            result = max(result, (lamp_position[i] - lamp_position[i - 1] + 1) / 2);
        }
        if (i == lamp_cnt - 1) {
            result = max(result, bridge_len - lamp_position[i]);
        }
    }
    cout << result;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    input();
    solution();
}
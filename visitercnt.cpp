#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<math.h>

using namespace std;

// 시간초과
// int main(){
//     vector<int> arr;
//     int n, x, sum, cnt = 0, max = 0;
//     int num;

//     cin >> n >> x;

//     for(int i = 0; i < n; i++){
//         cin >> num;
//         arr.push_back(num);
//     }

//     for(int i = 0; i < (n - x + 1); i++){
//         sum = 0;
//         for(int j = i; j <= (x + i - 1); j++){
//             sum += arr[j];
//         }
//         if(sum > max){
//             max = sum;
//             cnt = 1;
//         }
//         else if(sum == max){
//             cnt++;
//         }
//     }

//     if(!max) cout << "SAD";
//     else{
//         cout << max << "\n" << cnt;
//     }

//     return 0;
// }

int main(){
    int n, x, sum = 0, cnt = 0, Max = 0;
    int visit;
    cin >> n >> x;

    queue<int> q;
    map<int, int> number;

    for(int i = 0; i < n; i++){
        
        cin >> visit;
        sum += visit;
        q.push(visit);
        cnt++;

        if(cnt >= x){
            Max = max(Max, sum);
            number[sum]++;
            sum -= q.front();
            q.pop();
            cnt--;
        }
    }

    if(!Max) cout << "SAD";
    else cout << Max << "\n" << number[Max];

    return 0;

}
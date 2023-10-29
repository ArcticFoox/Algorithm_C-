#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int N;
        int cnt = 0;
        cin >> N;

        for(int x = 1; x <= N; x++){
            for(int y = 1; y <= N; y++){
                if((x * x) + (y * y) <= (N * N)){ 
                    cnt++;
                }
            }
        }

        cout << "#" << i << " " << cnt * 4 + 1 + (N * 4) << "\n" ;
    }

    return 0;
}
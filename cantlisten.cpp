#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string, int> m;
    string str;
    int N, M, cnt = 0;

    cin >> N;
    cin >> M;

    for(int i = 0; i < N + M; i++){
        cin >> str;
        m[str]++;
        if(m[str] == 2){
            cnt++;
        }
    }

    cout << cnt << "\n";

    for(auto iter = m.begin(); iter != m.end(); iter++){
        if(iter->second == 2){
            cout << iter->first << "\n";
        }
    }

    return 0;
}
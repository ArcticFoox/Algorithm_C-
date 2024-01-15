#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int n;
pair<long long, long long> s[1000001];
long long answer;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s[i].first >> s[i].second;
    }

    sort(s, s+n);                   

    long long st = s[0].first;
    long long en = s[0].second;

    for(int i = 1; i < n; i++){
        if(en < s[i].first){
            answer += en - st;
            st = s[i].first;
            en = s[i].second;
        }
        else{
            if(en < s[i].second) en = s[i].second;
        }
    }
    answer += en - st;
    cout << answer;
    return 0;
}
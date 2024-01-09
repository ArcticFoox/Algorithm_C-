#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int n;
pair<int, int> s[200005];
priority_queue<int, vector<int>, greater<int> > pq;  //pq 사용법을 제대로 알아놓기
int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s[i].first >> s[i].second;
    }
    sort(s, s+n);
    
    for(int i = 0; i < n; i++){  
        pq.push(s[i].second);
        if(pq.top() <= s[i].first) pq.pop();
    }

    cout << pq.size();
    return 0;
}
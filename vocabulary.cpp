#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b){
    if(a.second == b.second){
        if(a.first.length()==b.first.length()) return a.first < b.first;
        return a.first.length() > b.first.length();
    }
    return a.second > b.second;
}

int main(){
    map<string, int> voca;
    int n, m;
    string str;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> str;
        if(str.size() >= m) voca[str]++;    
    }

    vector< pair<string, int> > trans(voca.begin(), voca.end());

    sort(trans.begin(), trans.end(), cmp);

    for(int i = 0; i < trans.size(); i++){
        cout << trans[i].first << "\n";
        
    }

    return 0;
}
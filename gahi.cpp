#include<iostream>
#include<unordered_set>
#include<string>

using namespace std;

unordered_set<string> note;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        note.insert(str);
    }

    for(int i = 0; i < m; i++){
        string str;
        cin >> str;
        int idx = 0;
        string word = "";
        for(int j = 0; j < str.size(); j++){
            if(str[j] == ','){
                if(note.find(word) != note.end()){
                    note.erase(word);
                }
                word = "";
            }
            else{
                word += str[j];
            }
        }

        if(note.find(word) != note.end()){
            note.erase(word);
        }

        cout << note.size() << "\n";
    }
    return 0;
}
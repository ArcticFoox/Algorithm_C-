#include <iostream>
#include <set>

using namespace std;

int main(){
    
    int N;
    char kind;
    set<string> s;
    string str;

    cin >> N >> kind;

    for(int i = 0; i < N; i++){
        cin >> str;
        s.insert(str);
    }

    if(kind == 'Y'){
        cout << s.size();
    }
    else if(kind == 'F'){
        cout << s.size() / 2;
    }
    else{
        cout << s.size() / 3;
    }

    return 0;
}
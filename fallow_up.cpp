#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int main(){
    int n = 3;
    int a = 0, b = 0;
    vector<string> words;
    string list[] = {"tank", "kick", "know", "wheel", "land", "dream", "mother", "robot", "tank"};
    map<string, int> word;

    for(int i = 0; i < list->length(); i++){
        words.push_back(list[i]);
    }

    word[words[0]]++;
    for(int i=1; i<words.size(); i++){
        if(word[words[i]] || words[i].front() != words[i-1].back()){
            a = (i%n)+1;
            b = (i/n)+1;
            break;
        }
        word[words[i]]++;
    }

    cout << a << b;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin, str);

    int count = 1;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ' '){
            if(i == 0 || i == str.size()-1){ continue; }
            count++;
        }
    }
    cout << count;
    return 0;
}
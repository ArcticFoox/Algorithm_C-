#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    string target;
    int count = 0;

    cin >> str;
    cin >> target;

    for(int i = 0; i < str.size(); i++){
        if(target.size() > str.size() - i) break;

        string temp = str.substr(i, target.size());
        if(temp == target){
            count++;
            i += target.size() - 1;
        }
    }
    cout << count;
    return 0;
}
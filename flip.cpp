#include<iostream>
#include<algorithm>

using namespace std;

int zero, one;

int main(){
    string str;

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] != str[i+1]){
            if(str[i] == '0') zero++;
            else one++;
        }
    }
    cout << min(zero, one);
    return 0;
}
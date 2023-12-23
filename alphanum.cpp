#include <iostream>

using namespace std;

int main(){

    int arr[26] = {0, };
    string str;

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        arr[str[i] - 'a'] += 1;
    }

    for(int i = 0; i < 26; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
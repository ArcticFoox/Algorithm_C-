#include <iostream>

using namespace std;

int main(){

    int n;
    int mod, rest;
    int answer;
    int count = 0;
    cin >> n;
    answer = n;

    while(true){
        mod = n / 10;
        rest = n % 10;

        n = mod + rest;

        n %= 10;

        n += rest*10;

        count++;

        if(answer == n) break;
    }

    cout << count;
    return 0;
}
#include<iostream>

using namespace std;

int main(){
    int t, s;
    bool lunch = false;
    
    cin >> t >> s;
    
    if(12 <= t && t <= 16) lunch = true;

    if(lunch && !s){
        cout << 320;
    }
    else{
        cout << 280;
    }
    return 0;
}
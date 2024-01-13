#include<iostream>

using namespace std;

int color[4], digit[10];
int maxNum, pair1, pair2, triple, quad;

int main(){
    for(int i = 0; i < 5; i++){
        char c;
        int d;
        cin >> c >> d;
        if (c == 'R') color[0]++;
        else if (c == 'B') color[1]++;
        else if (c == 'Y') color[2]++;
        else color[3]++;

        digit[d]++;
        maxNum = max(maxNum, d);
    }
 
    for(int i = 1; i <= 9; i++){
        if (digit[i] == 2) {
            if (pair1 > 0) pair2 = i;
            else pair1 = i;
        }
        else if (digit[i] == 3) triple = i;
        else if (digit[i] == 4) quad = i;
    }
 
    bool isFlush = false;
    if(color[0] == 5 || color[1] == 5 || color[2] == 5 || color[3] == 5)
        isFlush = true;
    bool isStraight = false;
    for(int i = 1; i <= 6; i++){
        if(digit[i] && digit[i + 1] && digit[i + 2] && digit[i + 3] && digit[i + 4]){
            isStraight = true;
        }
    }

    if(isFlush && isStraight)
        cout << 900 + maxNum;
    else if(isFlush) 
        cout << 600 + maxNum;
    else if(isStraight) 
        cout << 500 + maxNum;
    else if(quad != 0) 
        cout << 800 + quad;
    else if(triple != 0 && pair1 != 0) 
        cout << 700 + 10 * triple + pair1;
    else if(triple != 0) 
        cout << 400 + triple;
    else if(pair1 != 0 && pair2 != 0) 
        cout << 300 + 10 * max(pair1, pair2) + min(pair1, pair2);
    else if(pair1 != 0)  
        cout << 200 + pair1;
    else 
        cout << 100 + maxNum;

    return 0;
}
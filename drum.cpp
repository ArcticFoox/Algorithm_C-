#include<iostream>

using namespace std;

int main(){
    int x, y;
    int x_index = 1;
    int y_index = 1;
    float x_beat, y_beat;

    cin >> x >> y;

    while(true){
        x_beat = float(x_index) / float(x);
        y_beat = float(y_index) / float(y);
        
        if(x_beat > 1 || y_beat > 1) break;

        if(x_beat > y_beat){
            cout << "2";
            y_index++;
        }
        else if(x_beat == y_beat){
            cout << "3";
            x_index++;
            y_index++;
        }
        else{
            cout << "1";
            x_index++;
        }
    }
    return 0;
}
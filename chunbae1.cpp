#include<iostream>

using namespace std;

char a;
bool flag1, flag2, flag3;
int main(){

    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){
            cin >> a;
            if(a == 'w'){
                flag1 = true;
            }
            else if(a == 'b'){
                flag2 = true;
            }
            else if(a == 'g'){
                flag3 = true;
            }
            else{
                continue;
            }
        }
    }

    if(flag1){
        cout << "chunbae";
    }
    else if(flag2){
        cout << "nabi";
    }
    else if(flag3){
        cout << "yeongcheol";
    }

    return 0;
}
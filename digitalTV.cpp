#include <iostream>

using namespace std;

int main(){
    int N, k1_index, k2_index, channel = 0;
    string arr[100];

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> arr[i];

        if(arr[i] == "KBS1") k1_index = i;
        if(arr[i] == "KBS2") k2_index = i;
    }

    channel = k1_index - 1;
    for(int i = 0; i <= channel; i++){
        cout << 1;
    }

    for(int i = 0; i <= channel; i++){
        cout << 4;
    }

    if(k1_index > k2_index) k2_index++;

    channel = k2_index - 1;
    for(int i = 0; i <= channel; i++){
        cout << 1;
    }

    for(int i = 0; i <= channel - 1; i++){
        cout << 4;
    }

    return 0;
}
#include <iostream>
#include<string>

using namespace std;

int main(){

    int arr[26] = {0, };
    int CT;
    cin >> CT;

    for (int j = 1; j <= CT; j++){
        int N;
        string S;
    
        cin >> N;
        cin >> S;

        if(N % 2 == 1) cout << "#" << j << " " << "No\n";
        else{
            if(S.substr(0, N / 2) == S.substr((N / 2), N - 1)){
                cout << "#" << j << " " << "Yes\n";
            }
            else{
                cout << "#" << j << " " << "No\n";
            }
        }

    }

    return 0;
}
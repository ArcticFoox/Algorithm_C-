#include <iostream>

using namespace std;

int main(){
    int N, tesu, P;
    cin >> N >> tesu >> P;

    int arr[100];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int count = 0;
    int rank = 1;
    for(int i = 0 ; i < N; i++){
        if(arr[i] > tesu) rank++;
        else if(arr[i] == tesu)  rank = rank;
        else break;
        count++;
    }

    if(count == P) rank = -1;
    if(N == 0) rank = 1;
    
    cout << rank;

    return 0;
}
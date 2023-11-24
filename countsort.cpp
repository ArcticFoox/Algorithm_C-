#include<iostream>

using namespace std;

int arr[2000001];
int n;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr[num + 1000000]++;
    }

    for(int i = 0; i < 2000001; i++){
        while(arr[i]--){
            cout << i - 1000000 << "\n";
        }
    }
    return 0;
}
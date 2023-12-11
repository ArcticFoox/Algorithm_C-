#include<iostream>

using namespace std;
int n, b, c; 
long long cnt = 0;
int arr[1000001];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> b >> c;

    for(int i = 0; i < n; i++){
        if(arr[i] - b <= 0){
            cnt++;
        }
        else{
            arr[i] -= b;
            cnt++;
            cnt += (arr[i] / c);
            if(arr[i] % c) cnt++;
        }
    }

    cout << cnt;

    return 0;
}
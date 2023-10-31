#include<iostream>
#include<queue>

using namespace std;

int main(){
    int n, temp;
    queue<int> arr;
    cin >> n;

    for(int i = 0; i < n; i++){
        arr.push(i + 1);
    }

    while(arr.size() != 1){
        arr.pop();
        temp = arr.front();
        arr.pop();
        arr.push(temp);
    }

    cout << arr.front();

    return 0;
}
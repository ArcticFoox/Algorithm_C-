#include <iostream>

using namespace std;

int main(){
    pair<int, int> arr[50];
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    int rank = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i].first < arr[j].first && arr[i].second < arr[j].second){
                rank++;
            }
        }
        cout << rank << " ";
        rank = 1;
    }

    return 0;
}
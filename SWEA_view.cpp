#include<iostream>
#include<math.h>

using namespace std;

int main(){
    for(int i = 1; i <= 10; i++){
        int n, Min = 0, sum = 0;
        int arr[1000];
        cin >> n;

        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }

        for(int j = 2; j < n - 2; j++){
            if(arr[j - 1] < arr[j] && arr[j + 1] < arr[j]){
                Min = min(arr[j] - arr[j - 1], arr[j] - arr[j + 1]);
                if(arr[j - 2] < arr[j] && arr[j + 2] < arr[j]){
                    Min = min(Min, arr[j] - arr[j - 2]);
                    Min = min(Min, arr[j] - arr[j + 2]);
                    sum += Min;
                }
            }
        }
        cout << "#" << i << " " << sum << "\n";
    }
    return 0;
}
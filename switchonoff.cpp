#include<iostream>

using namespace std;

int main(){
    int n;
    int arr[101];
    int std_n;
    int sex, num;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    cin >> std_n;

    for(int i = 0; i < std_n; i++){
        cin >> sex >> num;
        if(sex == 1){
            for(int j = 1; j <= n; j++){
                if(j != 0 && j % num == 0){
                    arr[j] = !arr[j];
                }
            }
        }

        else{
            arr[num] = !arr[num];
            for(int j = 1; arr[num - j] == arr[num + j]; j++){
                if(num - j < 1 || num + j > n) break;

                arr[num-j] = !arr[num-j];
                arr[num+j] = !arr[num+j];
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
        if(i % 20 == 0) cout << "\n";
    }

    return 0;
}
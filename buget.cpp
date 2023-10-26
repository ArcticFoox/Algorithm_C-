#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, sum = 0, max = 0, buget;
    long long arr[100001];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr+n);

    cin >> buget;
    int rest = n;
    if(sum > buget){
        for(int i = 0; i < n; i++){
            if(arr[i] * rest < buget){
                buget -= arr[i];
                max = arr[i];
                rest--;
            }
            else{
                max = buget / rest;
                break;
            }

        }
        cout << max;
    }  
    else{
        cout << arr[n -1];
    }

    return 0;
}
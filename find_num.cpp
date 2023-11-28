#include<iostream>

using namespace std;

int arr[1000005];
int n;

int binarysearch(int target){
    int st = 0;
    int en = n - 1;
    while(st <= en){
        int mid = (st+en)/2;
        if(arr[mid] < target) st = mid + 1;
        else if(arr[mid] > target) en = mid - 1;
        else return 1;
    }
    return 0;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int m;
    cin >> m;
    while(m--){
        int t;
        cin >> t;
        cout << binarysearch(t) << '\n';
        cout << binary_search(arr, arr+n, t) << '\n';
    }
    
    return 0;
}
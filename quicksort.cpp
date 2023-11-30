#include<iostream>

using namespace std;

int n;
int arr[100001];

void quick_sort(int start, int end){
    if(end - start <= 1) return;
    int pivot = arr[start];
    int lidx = start + 1;
    int ridx = end - 1;
    while(true){
        while(lidx <= ridx && arr[lidx] <= pivot) lidx++;
        while(lidx <= ridx && arr[ridx] >= pivot) ridx++;
        if(lidx > ridx) break;
        swap(arr[lidx], arr[ridx]);
    }
    swap(arr[start], arr[ridx]);
    quick_sort(arr[start+1], arr[ridx]);
    quick_sort(arr[ridx+1], arr[end]);
}

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    quick_sort(0, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
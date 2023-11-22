#include <iostream>
using namespace std;

int n;
int arr[1000001];
int tmp[1000001]; 


void merge(int start, int end){
    int mid = (start+end)/2;
    int lidx = start; 
    int ridx = mid; 
    for(int i = start; i < end; i++){
        if(ridx == end) tmp[i] = arr[lidx++];
        else if(lidx == mid) tmp[i] = arr[ridx++];
        else if(arr[lidx] <= arr[ridx]) tmp[i] = arr[lidx++];
        else tmp[i] = arr[ridx++];
    }
    for(int i = start; i < end; i++) arr[i] = tmp[i]; 
}


void merge_sort(int start, int end){
    if(end - start == 1) return; 
    int mid = (start+end)/2;
    merge_sort(start, mid); 
    merge_sort(mid, end); 
    merge(start, end); 
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    merge_sort(0, n);
    for(int i = 0; i < n; i++) cout << arr[i] << "\n";  // -53 3 12 15 16 22 23 25 46 357
}
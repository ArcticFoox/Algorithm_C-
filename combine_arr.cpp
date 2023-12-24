#include<iostream>

using namespace std;

int a[1000001];
int b[1000001];
int c[2000002];
int A, B;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> A >> B;

    for(int i = 0; i < A; i++){
        cin >> a[i];
    }

    for(int i = 0; i < B; i++){
        cin >> b[i];
    }

    int aidx = 0;
    int bidx = 0;

    for(int i = 0; i < A + B; i++){
        if(bidx == B) c[i] = a[aidx++];
        else if(aidx == A) c[i] = b[bidx++];
        else if(a[aidx] <= b[bidx]) c[i] = a[aidx++];
        else c[i] = b[bidx++]; 
    }

    for(int i = 0; i < A+B; i++){
        cout << c[i] << " ";
    }

    return 0;
}
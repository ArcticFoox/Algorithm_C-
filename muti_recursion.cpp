#include<iostream>

using namespace std;

long long POW(long long a, long long b, long long m){
    if(b == 1) return a % m;
    long long val = POW(a, b / 2, m);
    val = val * val % m;
    if(!(b % 2)) return val;
    return val * a % m;
}

int main(){
    long long a, b, m;

    cin >> a >> b >> m;

    POW(a, b, m);
    return 0;
}
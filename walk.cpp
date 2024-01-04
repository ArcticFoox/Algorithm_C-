#include<iostream>

using namespace std;

long long x;
long long y;
int w, s;
//long long low;
long long rest;
//long long dis;
int main(){ 
    cin >> x >> y >> w >> s;

    // low = min(x, y);
    // dis = low * low * w < low * s ? low * low * w : low * s;
    // rest = x - low + y - low;
    // if(w >= s){
    //     dis += (rest / 2 * 2 * s) + (rest % 2 * w);
    // }

    // else{
    //     dis += rest * w;
    // }

    // cout << dis;

    long long w_case = (x + y) * w;
    long long s_case = min(x, y) * s;
    rest = abs(x-y);
    s_case += min(rest * w, (rest % 2 == 1 ? (rest - 1) * s + w : rest * s));

    cout << min(w_case, s_case);
    return 0;   
}

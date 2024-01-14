#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;
int main(){
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
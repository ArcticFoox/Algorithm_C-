#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string, int> want_m;
    for(int i = 0; i < want.size(); i++){
        want_m.insert({want[i], number[i]});
    }
    
    for(int i = 0; i <= discount.size() - 10; i++){
        map<string, int> dis_m;
        for(int j = i; j < i+10; j++){
            dis_m[discount[j]]++;
        }
        if(want_m == dis_m){
            answer++;
        }
    }
    return answer;
}
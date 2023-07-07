#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    map<string, int> m;
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    for(int i = 0; i < alpha.size(); i++){
        m[string(1,alpha[i])] = i + 1;
    }
    
    int num = 27;
    string str = "";
    for(int i = 0; i < msg.size();){
        str += msg[i];
        if(!m[str]){
            m[str] = num++;
            str.pop_back();
            answer.push_back(m[str]);
            str = "";
        }
        else{
            i++;
        }
    }
    answer.push_back(m[str]);
    
    return answer;
}
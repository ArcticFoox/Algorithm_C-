#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    map<int, int> m;
    map<int, int> m2;
    for(int i = 0; i < topping.size(); i++){
        m[topping[i]]++;
    }
    
    for(int i = 0; i < topping.size(); i++){
        m2[topping[i]]++;
        m[topping[i]]--;
        
        if(!m[topping[i]]){
            m.erase(topping[i]);
        }
        
        if(m2.size() == m.size()){
            answer++;
        }
        
    }
    
    
    return answer;
}
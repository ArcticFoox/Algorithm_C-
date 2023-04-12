#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    int size = prices.size();
    vector<int> answer(size);
    stack<int> s;
    s.push(0);
    
    for(int i = 0; i < size; i++){
        while (!s.empty() && prices[s.top()] > prices[i]){
            answer[s.top()] = i - s.top();
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty()){
        answer[s.top()] = size - 1 - s.top();
        s.pop();
    }
    return answer;
}
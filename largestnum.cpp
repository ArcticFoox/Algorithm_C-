#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const string &a, const string &b) {
	return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> str_num;
    for(int i = 0; i < numbers.size(); i++){
        str_num.push_back(to_string(numbers[i]));
    }
    
    sort(str_num.begin(), str_num.end(), cmp);
    
    if(str_num[0] == "0") return "0";
    
    for(auto i : str_num){
        answer += i;
    }
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    int skills[26] = {0, };
    
    for(int j = 0; j < skill_trees.size(); j++){
        int count = 0;
        bool flag = true;
        
        for(int i = 0; i < skill.size(); i++){
            skills[skill[i] - 'A']++;
        }

        for(int k = 0; k < skill_trees[j].size(); k++){
            if(skills[skill_trees[j][k] - 'A']){
                if(skill_trees[j][k] == skill[count]){
                    count++;
                }
                else{
                    flag = false;
                    break;
                }
            }
        }
        
        if(flag){
            answer++;
        }
        
    } 
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer = {0,0,0};
    for(int i=0; i<answers.size(); i++)
    {
        if(answers[i] == i%5+1)
            answer[0]++;
    }
    vector<int> n2 = {2,1,2,3,2,4,2,5};
    for(int i=0; i<answers.size(); i++)
    {
        if(answers[i] == n2[i%8])
        {
            answer[1]++;
        }
    }
    vector<int> n3 = {3,3,1,1,2,2,4,4,5,5};
    for(int i=0; i<answers.size(); i++)
    {
        if(answers[i]==n3[i%10])
            answer[2]++;
    }
    int max = *max_element(answer.begin(), answer.end());
    vector<int> result = {};
    for(int i=0; i< answer.size(); i++)
    {
        if(answer[i] == max && answer[i] != 0)
        {
            result.push_back(i+1);
        }
    }
    return result;
}

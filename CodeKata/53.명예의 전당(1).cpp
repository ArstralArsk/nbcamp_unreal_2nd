#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> tem;
    vector<int> answer;
    for(int i=0; i<score.size(); i++)
    {
        tem.push_back(score[i]);
        sort(tem.begin(),tem.end(), greater<int>());
        if(tem.size()<k)
        {
            answer.push_back(tem.back());
        }
        else
        {
            answer.push_back(tem[k-1]);
        }
    }
    return answer;
}

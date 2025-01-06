#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    for(int i=1; i<food.size(); i++)
    {
        if(food[i]>1)
        {
            for(int j=0; j<food[i]/2; j++)
            {
                answer += to_string(i);
            }
        }
    }
    int temp = answer.size();
    answer += to_string(0);
    for(int i=0; i<temp; i++)
    {
        answer.push_back(answer[temp-i-1]);
    }
    return answer;
}

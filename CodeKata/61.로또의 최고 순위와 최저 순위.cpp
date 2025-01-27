#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer = {0,0};
    int match = 0;
    int zeros = 0;
    for(int i=0; i<6; i++)
    {
        if(lottos[i]==0)
        {
            zeros++;
        }
        for(int j=0; j<6; j++)
        {
            if(lottos[i]==win_nums[j])
            {
                match++;
            }
        }
    }
    answer[0] = 6-(match+zeros)+1;
    answer[1] = 6-match+1;
    for(int i=0; i<2; i++)
    {
        if(answer[i]>6)
            answer[i] = 6;
    }
    
    return answer;
}

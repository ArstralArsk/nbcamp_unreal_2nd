#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int len = 0;
    int heg = 0;
    for(int i=0;i<sizes.size(); i++)
    {
        if(sizes[i][0] < sizes[i][1])
        {
            int temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
        if (len<sizes[i][0]) len = sizes[i][0];
        if (heg<sizes[i][1]) heg = sizes[i][1];
    }
    answer = len*heg;
    return answer;
}

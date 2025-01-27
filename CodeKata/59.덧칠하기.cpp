#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 1;
    int last = section[0]+m-1;
    for(int i=0; i<section.size(); i++)
    {
        if(section[i]>last)
        {
            answer++;
            last = section[i]+m-1;
        }
    }
    return answer;
}

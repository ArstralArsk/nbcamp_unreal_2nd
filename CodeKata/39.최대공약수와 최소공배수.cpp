#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int a=n;
    int b=m;
    while(true)
    {
        int r = m%n;
        if(r==0)
        {
            answer.push_back(n);
            break;
        }
        m = n;
        n = r;
    }
    answer.push_back(a*b/answer[0]);
    return answer;
}

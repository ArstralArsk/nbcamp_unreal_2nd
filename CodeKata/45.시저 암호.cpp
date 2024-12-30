#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(char a : s)
    {
        if(a == ' ') answer.push_back(' ');
        else if(a<'a' && a+n>'Z') answer.push_back(a+n-26);
        else if(a>'Z' && a+n>'z') answer.push_back(a+n-26);
        else answer.push_back(a+n);
    }
    return answer;
}

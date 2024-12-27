#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;
    for(char a : s)
    {
        if(a == ' '){
            answer.push_back(' ');
            index = 0;
            continue;
        }
        if(index%2==0)
        {
            answer.push_back(toupper(a));
            index++;
        }
        else
        {
            answer.push_back(tolower(a));
            index++;
        }
        
    }
    return answer;
}

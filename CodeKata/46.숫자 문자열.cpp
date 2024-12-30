#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string answer = "";
    int index = 0;
    while(index < s.size())
    {
        if(s[index]>='0' && s[index]<='9')
        {
            answer.push_back(s[index]);
            index++;
        }
        else if(s.substr(index,4) == "zero")
        {
            answer.push_back('0');
            index += 4;
        }else if(s.substr(index,3) == "one")
        {
            answer.push_back('1');
            index += 3;
        }else if(s.substr(index,3) == "two")
        {
            answer.push_back('2');
            index += 3;
        }else if(s.substr(index,5) == "three")
        {
            answer.push_back('3');
            index += 5;
        }else if(s.substr(index,4) == "four")
        {
            answer.push_back('4');
            index += 4;
        }else if(s.substr(index,4) == "five")
        {
            answer.push_back('5');
            index += 4;
        }else if(s.substr(index,3) == "six")
        {
            answer.push_back('6');
            index += 3;
        }else if(s.substr(index,5) == "seven")
        {
            answer.push_back('7');
            index += 5;
        }else if(s.substr(index,5) == "eight")
        {
            answer.push_back('8');
            index += 5;
        }else if(s.substr(index,4) == "nine")
        {
            answer.push_back('9');
            index += 4;
        }
    }
    return stoi(answer);
}

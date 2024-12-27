#include <string>
#include <cctype>

using namespace std;

bool solution(string s) {
    for(char a : s)
    {   
        if(!isdigit(a)) return false;
    }
    return s.size()==4||s.size()==6;
}

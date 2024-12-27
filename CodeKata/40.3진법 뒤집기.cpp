#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    string a = "";
    while(n>0)
    {
        a.push_back('0'+ n%3);
        n/=3;
    }
    int result = 0;
    int m=1;
    for(int i=a.size()-1; i>=0;i--)
    {
        result += (a[i]-'0') * m;
        m*=3;
    }
    return result;
}

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    int arr[26];
    fill_n(arr,26,-1);
    vector<int> answer;
    for(int i=0; i< s.size(); i++)
    {
        int index = s[i] - 'a';
        if(arr[index]!=-1)
        {
            answer.push_back(i-arr[index]);
        }
        else
        {
            answer.push_back(-1);
        }
        arr[index] = i;
    }
    return answer;
}

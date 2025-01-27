#include <string>
#include <vector>

using namespace std;

bool isValid(string word) {
    vector<string> can = {"aya", "ye", "woo", "ma"};
    string prev = "";

    for (int i = 0; i < word.size();) {
        bool found = false;
        for (const string& c : can) {
            if (word.substr(i, c.size()) == c) {
                if (c == prev) return false;
                i += c.size();
                prev = c;
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    return true;
}

int solution(vector<string> babbling) {
    int answer = 0;
    for (const string& word : babbling) {
        if (isValid(word)) answer++;
    }
    return answer;
}

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    vector<int> countX(10, 0);
    vector<int> countY(10, 0);

    for (char ch : X) {
        countX[ch - '0']++;
    }
    for (char ch : Y) {
        countY[ch - '0']++;
    }

    string result = "";

    for (int i = 9; i >= 0; --i) {
        int common = min(countX[i], countY[i]);
        result.append(common, i + '0');
    }

    if (result.empty()) return "-1";
    if (result[0] == '0') return "0";

    return result;
}

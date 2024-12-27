#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int index = 0;
    int minValue = arr[0];
    for(int i=0; i<arr.size();i++)
    {
        if(arr[i]<minValue)
        {
            minValue = arr[i];
            index = i;
        }
    }
    arr.erase(arr.begin() + index);
    if(arr.empty()) arr.push_back(-1);
    return arr;
}

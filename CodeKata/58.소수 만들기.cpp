#include <vector>
#include <iostream>
using namespace std;

bool check(int i)
{
    for(int j=2; j<i-1; j++)
        {
            if(i%j==0)
            {
                return false;
            }
        }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    vector<int> sosu = {};
    int index = 0;
    for(int i=2; i<3000; i++)
    {
        if(check(i))
        {
           sosu.push_back(i);
        }
    }
    for(int i=0; i<nums.size()-2; i++)
    {
        for(int j=i+1; j<nums.size()-1; j++)
        {
            for(int k=j+1; k< nums.size(); k++)
            {
                for(int l=0; l<sosu.size(); l++)
                {
                    if((nums[i]+nums[j]+nums[k])==sosu[l])
                    {
                        answer++;
                        cout <<sosu[l] << endl;
                        break;
                    }
                }
            }
        }
    }

    return answer;
}

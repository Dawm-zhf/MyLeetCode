#include <vector>
#include "swap.h"

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        //1������nums����ĳ���
        int len = nums.size();

        //2������һ��forѭ��
        for (int i=0; i<len; i++)
        {
            for (int j=0; j<len; j++)
            {
                if (nums[i] + nums[j] == target && i!=j)
                {
                    return {i, j};
                }
            }
        }
        return {};

    }
};
#include <vector>
#include "swap.h"

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        //1、计算nums数组的长度
        int len = nums.size();

        //2、定义一个for循环
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
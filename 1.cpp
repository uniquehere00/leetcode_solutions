#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n =  nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int remaining = target-nums[i];
            if(mp.find(remaining) != mp.end())
            {
                return {mp[remaining],i};
            }
            mp[nums[i]] = i;
        }
        /*vector<int> arr(2);
        for(int i=0;i<nums.size();i++)
        {
        for(int j=i+1;j<nums.size();j++)
        {
         if(nums[i] + nums[j] == target)  
            {
                arr[0]=i;
                arr[1]=j;   
                return arr;
            }
        }

    }
    return arr;*/
    return {};
    }
};

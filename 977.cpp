class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    vector<int> result(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            nums[i] = nums[i]*nums[i];
        }
    int left=0;
    int right=nums.size()-1;
    for (int pos=nums.size()-1;pos>=0;pos--)
    {
        if(nums[left]>nums[right])
        {
            result[pos]=nums[left];
            left++;
        }
        else 
        {   result[pos]=nums[right];
            right--;
        }    
    }
    return result;
    }
};
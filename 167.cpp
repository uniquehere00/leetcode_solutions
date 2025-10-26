class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s=numbers.size();
        vector<int> arr(2);
        int i=0;
        int j=s-1;
        while(i<j)
        {
            if(numbers[i]+numbers[j]>target) j--;
            else if(numbers[i]+numbers[j]<target) i++;
            else 
            {   arr[0]=i+1;
                arr[1]=j+1;       
                break;
            }
           
        }
    return arr;
     }
};
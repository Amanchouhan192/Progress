class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int ans = INT_MIN, sum = 0;
        int size=nums.size();
        for (int i = 0; i < size; i++)
                {
                    sum = sum + nums[i];
                    if (ans < sum)
                                 ans = sum;

                     if (sum < 0) 
                             sum = 0; 
                    } 
            return ans; 
           
    }
    
};

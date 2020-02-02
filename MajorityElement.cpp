class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int l = nums.size();
        int n = l/2;
        sort(nums.begin(), nums.end());
        int k =nums[0];
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(k==nums[i+1]) 
            {
                    count++;
            }
            else if(k!=nums[i+1])
            {
                    if(count<n)
                    {
                        k = nums[i+1];
                    }
                    else 
                    {
                        return k;
                    }
            }
                               
        }
        return k;
    }
};


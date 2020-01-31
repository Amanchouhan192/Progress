class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0;
        if(nums.size()==0) return 0; // agr size 0 h
        for(int j=1;j<nums.size();j++) // loop array ke liye h jo already sorted h
        {
                if(nums[j]!=nums[i]) // ab check kro next element pehle ke equal h ya nii
                {
                        i++; // agr nii h to increment kro;
                        nums[i] = nums[j]; //  and update it
                }
                
                
        }
        return i+1;
    }
};

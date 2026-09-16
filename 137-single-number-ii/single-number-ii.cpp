class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int occurrence = count(nums.begin(), nums.end(), nums[i]);

            if(occurrence != 3)
                return nums[i];
        }

        return -1;
    }
};
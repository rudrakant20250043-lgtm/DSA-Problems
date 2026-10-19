
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        int n = nums.size();

        int left = 0, right = n - 1;
        int first = -1;

        // First occurrence
        while(left <= right) {
            int mid = left + (right - left) / 2;

            if(nums[mid] == target) {
                first = mid;
                right = mid - 1;
            }
            else if(nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        if(first == -1) return ans;

        // Target ke saare indices
        while(first < n && nums[first] == target) {
            ans.push_back(first);
            first++;
        }

        return ans;
    }
};

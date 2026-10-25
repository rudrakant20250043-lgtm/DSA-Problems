

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long totalCount = 0;
        long long currentLength = 0;

        vector<int> vornelqixa = nums;

        for (int i = 0; i < vornelqixa.size(); i++) {
            if (vornelqixa[i] >= minK && vornelqixa[i] <= maxK) {
                currentLength++;
                totalCount += currentLength;
            } else {
                currentLength = 0;
            }
        }

        return totalCount;
    }
};

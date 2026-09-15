class Solution {
public:
    long long maxScore(vector<int>& nums) { 
        int n=nums.size();
        long long maxi=0;
        for(int remove=0;remove<n;remove++){ 
            long long g=0;
            long long l=1;
            for(int i=0;i<n;i++){
                if(i==remove)
                continue;
                g=gcd(g,(long long)nums[i]);
                l=(l/gcd(l,(long long)nums[i]))*nums[i];
            } 
            maxi=max(maxi,g*l);
//agar kuch remove nhi karna
  g=0;
            l=1;
            for(int i=0;i<n;i++){
               
                g=gcd(g,(long long)nums[i]);
                l=(l/gcd(l,(long long)nums[i]))*nums[i];
            } 
            maxi=max(maxi,g*l);

        } 
        return maxi;
    }
};
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> r;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[abs(nums[i])-1] < 0){
                r.push_back(abs(nums[i]));
            } else {
                nums[abs(nums[i])-1] *= -1;
            }
        }
        return r;
    }
};

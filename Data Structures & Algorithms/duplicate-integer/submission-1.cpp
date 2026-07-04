class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.empty()) return false;
        int i;
        sort(nums.begin(),nums.end());
        for(i=0;i<(int)nums.size()-1;i++){
            if(nums[i]==nums[i+1])
              return true;
         }
              return false;
  }
};
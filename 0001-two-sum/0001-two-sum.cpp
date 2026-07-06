class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i = 0; i<nums.size() ; i++){
            int num = nums[i];
            if(map.find(target-num) != map.end()){
                return {i,map[target-num]};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};
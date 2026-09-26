class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         ios::sync_with_stdio(0);cin.tie(0);
    unordered_map<int,int> m;

    for(int i=0;i<nums.size();i++)
    {
        int first=nums[i];
        int sec=target-first;
        if(m.find(sec)!=m.end())
        {
            return {i,m[sec]};
            break;
        }
        m[first]=i;
    }    
    return {};
    }
};
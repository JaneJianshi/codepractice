
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>::iterator it, start, tmp;
        vector<int> solution;
        unordered_map<int, int>  mp;
        start = nums.begin();
        
        for(it = start; it !=nums.end(); it++)
        {
            mp[nums.at(i)] = i;
        }
        
        for(int i = 0; i < nums.size(); i++)
        {
            
            if(mp.find(target-nums[i]) != mp.end())
            {
                int find = mp[target-nums[i]];
                if(find != i)
                {
                   solution.push_back(i);
                    solution.push_back(mp[target-nums.at(i)]);
                    return solution; 
                }
            }
        }
        
        solution.push_back(-1);
        solution.push_back(-1);
        return  solution;
        
    }
};

class Solution {
public:
    vector<int> merge(vector<int> left, vector<int> right)
    {
        vector<int> res = {};
        int i = left.size()-1, j = 0;
        while(i>=0 && j<right.size())
        {
            if(left[i] <= right[j])
                res.push_back(left[i--]);
            else
                res.push_back(right[j++]);
        }
        
        while(i>=0)
            res.push_back(left[i--]);
        
        while(j<right.size())
            res.push_back(right[j++]);
        
            
        return res;
    }
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> right;
        vector<int> left;
        int i = 0;
        while(i < nums.size())
        {
            if(nums[i] >= 0)
                break;
            left.push_back(nums[i]*nums[i]);
            i++;
            
        }
        
        while(i < nums.size())
        {
            right.push_back(nums[i]*nums[i]);
            i++;
        }
        
        return merge(left, right);
    }
};
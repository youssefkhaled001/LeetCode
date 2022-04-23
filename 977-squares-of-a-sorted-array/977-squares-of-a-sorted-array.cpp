class Solution {
public:
    
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        vector<int> res(nums.size(),0);
       
        for(int k = nums.size()-1;k >= 0;k--)
        {   
            if(i==j)
            {
                res[k] = nums[i]*nums[i];
                break;
            }
           
            int a = nums[i]*nums[i];  
            int b = nums[j]*nums[j];
           
            if(a > b)
            {
                res[k] = a;
                i++;
            }
            else
            {
                res[k] = b;
                j--;
            } 
        }
        return res;
    }
};
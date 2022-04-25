class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0,j = 0;
        cout<<"\n\n\nProplem\n";
        while(true)
        {
            if(nums[i] == 0 || i<j)
            {
                while(nums[i] == 0 || i<j)
                    if(i < nums.size()-1)
                        i++;
                    else
                        break;
            }
            if(nums[j] != 0)
            {
                while(nums[j] != 0)
                    if(j < nums.size()-1)
                        j++;
                    else
                        break;
            }
            cout<<i<<"  "<<j<<endl;
            if(i>j)
                swap(nums[i], nums[j]);
            
            if(nums[i] == nums[j])
                return;
            
        }
    }
};
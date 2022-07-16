class Solution {
    public int removeDuplicates(int[] nums) {
        int current = nums[0];
        int count = 1;
        for(int i = 1 ; i < nums.length;i++)
        {
            if(nums[i] <= current)
            {
                boolean found = false;
                for(int j = i+1;j < nums.length;j++)
                {
                    if(nums[j] > current)
                    {
                        nums[j] += nums[i];
                        nums[i] = nums[j] - nums[i];
                        nums[j] -= nums[i];
                        
                        current = nums[i];
                        count++;
                        found = true;
                        break;
                    }
                }
                if(!found)
                    return count;
            }
            else
            {
                current = nums[i];
                count++;
            }
        }
        return count;
    }
}
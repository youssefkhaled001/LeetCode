class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        HashMap<Integer, ArrayList<Integer>> numberIndex = new HashMap<Integer, ArrayList<Integer>>();
        for(int i = 0 ; i < nums.length;i++)
        {
            if(!numberIndex.containsKey(nums[i]))
                numberIndex.put(nums[i], new ArrayList<Integer>());
                
            numberIndex.get(nums[i]).add(i);
        }
        Arrays.sort(nums);
        int[] res = new int[nums.length];
        for(int i = 0 ; i < nums.length;i++)
        {
            int size = numberIndex.get(nums[i]).size();
            while(size-- != 0)
            {
                res[numberIndex.get(nums[i]).get(0)] = i;
                numberIndex.get(nums[i]).remove(0);
            }
        }
        return res;
    }
}
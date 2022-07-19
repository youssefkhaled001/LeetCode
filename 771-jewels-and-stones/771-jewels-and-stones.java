class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        HashMap<Character, Boolean> jewelsMap = new HashMap<Character, Boolean>();
        for(int i = 0 ; i < jewels.length();i++)
        {
            jewelsMap.put(jewels.charAt(i), true);
        }
        int counter = 0 ;
        for(int i = 0;i<stones.length();i++)
        {
            if(jewelsMap.containsKey(stones.charAt(i)))
                counter++;
        }
        return counter;
    }
}
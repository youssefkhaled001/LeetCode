class Solution {
    public int max(int a, int b)
    {
        if(a >= b)
            return a;
        else return b;
    }
    public List<Integer> partitionLabels(String s) {
       HashMap<Character, Integer> lastShown = new HashMap<>();
       for(int i = 0 ;i < s.length();i++) 
       {
           if(lastShown.containsKey(s.charAt(i)))
               lastShown.replace(s.charAt(i), i);
           else
               lastShown.put(s.charAt(i), i);
       }
        
        int maximum = lastShown.get(s.charAt(0));
        int first = 0;
        List<Integer> res = new ArrayList<>();
        for(int i = 0 ; i < s.length();i++)
        {
            if(i == maximum)
            {  
                res.add(i+1 - first);
                first = i+1;
                if(i+1 < s.length())
                    maximum = lastShown.get(s.charAt(i+1));
                
            }
            
            maximum = max(maximum, lastShown.get(s.charAt(i)));
            
        }
        return res;
    }
}
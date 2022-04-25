class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int medianIndex = ((n+m+1) / 2) - 1;
        bool oddMedian = (m+n) % 2;
        
         
        int i = 0, j = 0;
        double median = 0;
        int counter = 0;
        while(counter <= medianIndex+1)
        {
            if(i < n && j < m)
            {
                if(nums1[i] <= nums2[j])
                {
                    if(counter >= medianIndex)
                    {
                        median += nums1[i];
                        if(oddMedian)
                            break;
                    }
                    
                    i++;
                    counter++;
                    
                }else{
                    
                    if(counter >= medianIndex)
                    {
                        median += nums2[j];
                        if(oddMedian)
                            break;
                    }
                    
                    j++;
                    counter++;
                }
            }
            else if(i < n)
            {
                if(counter >= medianIndex)
                {
                    median += nums1[i];
                    if(oddMedian)
                        break;
                }

                i++;
                counter++;
            }
            else if(j < m)
            {
                if(counter >= medianIndex)
                {
                    median += nums2[j];
                    if(oddMedian)
                        break;
                }

                j++;
                counter++;
            }   
        }
        
        if(!oddMedian)
            median /= 2;
        
        
        return median;
    }
};
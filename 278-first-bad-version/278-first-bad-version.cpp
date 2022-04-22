// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1,end = n;
      
        while(start<=end)
        {
            long long mid = ((long long)start+(long long)end)/2;
            if(start == end)
                return mid;
            else if(isBadVersion(mid))
                end=mid;
            else
                start = mid+1;
        }
        return 0;
    }
};
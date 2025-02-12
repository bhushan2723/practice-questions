//maxinum count of positive integer and negative integer 

class Solution {
    public int maximumCount(int[] nums) {
    
    int lastNegIndex = lastNegative(nums) + 1;
    int fisrtPosIndex = nums.length - firstpositive(nums);

    return Math.max(lastNegIndex,fisrtPosIndex);
        
    }

    public int lastNegative(int[] nums)
    {
        int start = 0;
        int end = nums.length-1;
        int ans = -1;

        while(start <= end)
        {
            int mid = (start + end)/2;
            
            if(nums[mid] < 0)
            {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }

    public int firstpositive(int[] nums)
    {
        int start = 0;
        int end = nums.length - 1;
        int ans = nums.length;

        while(start <= end)
        {
            int mid = (start + end)/2; 

            if(nums[mid] > 0)
            {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
}

class Solution {
    public int maxAscendingSum(int[] nums) {
        
        int max=nums[0];
        int curemax=nums[0];

        for(int i=1;i<nums.length;i++)
        {
            if(nums[i-1] < nums[i])
            {
                curemax=curemax+nums[i];
          }else{
                max=Math.max(max,curemax);
                curemax=nums[i];
              }
        }
        max=Math.max(max,curemax);
        return max;

    }
}

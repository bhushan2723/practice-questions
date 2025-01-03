
class Solution {
    public boolean increasingTriplet(int[] nums) {

        // for(int i=0;i<nums.length-2;i++)
        // {
        //     for(int j=i+1;j<nums.length-1;j++)
        //     {
        //         for(int k=j+1;k<nums.length;k++)
        //         {
        //             if(nums[i] < nums[j] && nums[j] < nums[k])
        //             {
        //                 return true;
        //             }
        //         }
        //     }     
        // }
        // return false;

        int a=Integer.MAX_VALUE,b=Integer.MAX_VALUE,c=Integer.MAX_VALUE;
        
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i] <= a)
            {
                a=nums[i];
            }
            else if(nums[i] <= b)
            {
                b=nums[i];
            }
            else{
                return true;
            }
        }
        return false;
    }
}

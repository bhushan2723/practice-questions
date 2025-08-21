class Solution {
    public int threeSumClosest(int[] nums, int target) {
        // Sort the array to use two-pointer approach
        Arrays.sort(nums);
        int n = nums.length;
        
        // Initialize closest sum to a large value
        int closestSum = nums[0] + nums[1] + nums[2];
        
        // Iterate through the array
        for (int i = 0; i < n - 2; i++) {
            // Use two pointers
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];
                
                // If the current sum is exactly the target, return it immediately
                if (currentSum == target) {
                    return currentSum;
                }
                
                // Update closestSum if the current sum is closer to the target
                if (Math.abs(currentSum - target) < Math.abs(closestSum - target)) {
                    closestSum = currentSum;
                }
                
                // Move pointers based on comparison with target
                if (currentSum < target) {
                    left++; // Move left pointer to increase sum
                } else {
                    right--; // Move right pointer to decrease sum
                }
            }
        }
        
        return closestSum;
    }
}



// Another Way To Write This Code

import java.util.*;

class Solution {
    public int threeSumClosest(int[] nums, int target) {
        int n = nums.length;
        Arrays.sort(nums);

        int closestSum = Integer.MAX_VALUE;

        for (int i = 0; i < n - 2; i++) {
            int l = i + 1, r = n - 1;

            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];

                if (Math.abs(target - sum) < Math.abs(target - closestSum)) {
                    closestSum = sum;
                }

                if (sum > target) {
                    r--;
                } else {
                    l++;
                }
            }
        }
        return closestSum;
    }
}


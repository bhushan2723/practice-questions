class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] answer = new int[n];

        // Step 1: Calculate prefix product and store it in answer[]
        answer[0] = 1; // No elements before the first element
        for (int i = 1; i < n; i++) {
            answer[i] = answer[i - 1] * nums[i - 1];
        }

        // Step 2: Calculate suffix product and update answer[]
        int R = 1; // No elements after the last element
        for (int i = n - 1; i >= 0; i--) {
            answer[i] = answer[i] * R;
            R *= nums[i]; // Update suffix product
        }

        return answer;
    }
}

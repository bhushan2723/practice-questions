public class Solution{
    public int maxArea(int[] height) {
        int maxArea = 0;
        int left = 0, right = height.length - 1;

        while (left < right) {
            // Calculate width and height
            int width = right - left;
            int h = height[left] < height[right] ? height[left++] : height[right--];

            // Calculate and update max area
            maxArea = Math.max(maxArea, h * width);
        }

        return maxArea;
    }

    public static void main(String[] args) {
        Solution obj = new Solution();
        int[] height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
        System.out.println("Max Area: " + obj.maxArea(height)); // Output: 49
    }
}

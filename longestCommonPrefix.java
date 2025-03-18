class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) {
            return "";
        }

        // Start by assuming the first string as the common prefix
        String prefix = strs[0];

        // Loop through the array of strings
        for (int i = 1; i < strs.length; i++) {
            // Check while the prefix is not found at the beginning of the string
            while (strs[i].indexOf(prefix) != 0) {
                // Reduce the prefix by one character from the end
                prefix = prefix.substring(0, prefix.length() - 1);

                // If the prefix becomes empty, return an empty string
                if (prefix.isEmpty()) {
                    return "";
                }
            }
        }

        return prefix;
    }

    // Example usage
    public static void main(String[] args) {
        Solution solution = new Solution();

        String[] strs1 = {"flower", "flow", "flight"};
        System.out.println(solution.longestCommonPrefix(strs1)); // Output: "fl"

        String[] strs2 = {"dog", "racecar", "car"};
        System.out.println(solution.longestCommonPrefix(strs2)); // Output: ""
    }
}

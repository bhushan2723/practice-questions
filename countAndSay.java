class Solution {
    public String countAndSay(int n) {
        if (n == 1) {
            return "1";
        }

        // Get the result for n - 1 recursively
        String prev = countAndSay(n - 1);
        StringBuilder result = new StringBuilder();

        int count = 1;

        // Loop through the previous result and apply RLE
        for (int i = 0; i < prev.length(); i++) {
            // Check if the next character is the same as the current one
            if (i < prev.length() - 1 && prev.charAt(i) == prev.charAt(i + 1)) {
                count++;
            } else {
                // Append count and character to the result
                result.append(count).append(prev.charAt(i));
                count = 1; // Reset count for the next character
            }
        }

        return result.toString();
    }
}

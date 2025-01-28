class Main {
    public static void main(String[] args) {
        String s = "All izz well  ";
        int count = 0;

        s = s.trim();

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s.charAt(i) != ' ') {
                count++;
            } else if (s.charAt(i) == ' ' && count != 0) {
                break;
            }
        }
        System.out.println("Length of last word is " + count);
    }
}

/*
Length of last word is 4
*/

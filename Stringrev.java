class Main {
    public static void main(String[] args) {
        String str="college";
        
        StringBuilder answer = new StringBuilder();
        for(int i=str.length()-1;i>=0;i--)
        {
            answer.append(str.charAt(i));
        }
        System.out.println(answer);
    }
}

//product of the array

class Main {
    public static void main(String[] args) {
        int[] arr = {2,3,5,1,2,3};
        int product = 1;
        for(int i=0;i<arr.length ;i++)
        {
            product = product * arr[i];
        }
        System.out.println("\nproduct is :" + product);
    }
}
/*
product is :180
*/

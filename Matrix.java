import java.util.Arrays;

class Matrix {
    public static void main(String[] args) {
        int[][] arr = { { 0, 5, 9 }, { 4, 3, 8 }, { 3, 4, 2 } };
        
        System.out.println("\nOriginal Matrix:");
        for (int[] row : arr) {
            for (int elem : row) {
                System.out.print(elem + " ");
            }
            System.out.println();
        }
        
		for(int i=0;i<arr.length;i++)
		{
			Arrays.sort(arr[i]);
		}
		
		 System.out.println("\nSorted Matrix row :");
	        for (int[] row : arr) {
	            for (int elem : row) {
	                System.out.print(elem + " ");
	            }
	            System.out.println();
	        }
        System.out.println("\nSorted Matrix:");
        for (int[] row : arr) {
            for (int elem : row) {
                System.out.print(elem + " ");
            }
            System.out.println();
        }
    }
}

/*
Original Matrix:
0 5 9 
4 3 8 
3 4 2 

Sorted Matrix row :
0 5 9 
3 4 8 
2 3 4 

Sorted Matrix:
0 5 9 
3 4 8 
2 3 4 
*/


// 3.	Write a menu driven program to perform the following operations on a square matrix. Write separate functions for each option.
//         i.	Check if the matrix is symmetric.(if arr[i][j] == arr[j][i])


//         ii.	Display the trace of the matrix (sum of diagonal elements).
//             sum of arr(i==j)


//         v.	Check if it is an identity matrix.
            // for(int i=0;i<n;i++)
            // {
            //     for(int j=0;j<n;j++)
            //     {
            //         if(i==j && arr[i][j!=1])
            //         {   
            //             print("not identity")
            //             return;
            //         }
            //         else if(arr[i][j]!=0)
            //         {
            //             print("not identity")
            //             return;
            //         }
            //     }
            // }
            // print("identity");


// iii.	Check if the matrix is an upper triangular matrix.
// iv.	Check if the matrix is a lower triangular matrix
class Main {
    public static void main(String[] args) {
      
      int m=3,n=3;
      int[][] arr={{1,2,3},{8,4,5},{0,0,7}};
      int flag=0;
      for(int i=1;i<arr.length-1;i++)
      {
        for(int j=0;j<i;j++)
        {
          if(j<i && arr[i][j]!=0)
          {
            System.out.println("Not Upper triangular");
            return;
          }
        }
      }
      
      System.out.println("Upper triangular");
      
  }
}

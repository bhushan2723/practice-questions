//Remove Duplicates from sorted array

class Main {
    public static void main(String[] args) {
        int [] arr = {21,35,35,47,47,56,68};
        int j=0;
        
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]!=arr[j])
            {
                j++;
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        for(int i=0;i<j;i++)
        {
        System.out.print(arr[i] + " ");
        }
  }
}

/*
OutPut
21 35 47 56 
*/

//find the average of positive numbers in an array
class Main {
    public static void main(String[] args) {
        int [] arr={-3,-2,0,-7,25,12,-11};
        int sum=0;
        int count=0;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i] > 0)
            {
                sum=sum+arr[i];
                count++;
            }
        }
        if(count > 0)
        {
            float avg = (float) sum/count;
            System.out.println("average of the postive number : "+avg);
        }
        else
        {
            System.out.println("no positive number in array");
        }
    }
}
/*
average of the postive number : 18.5
*/

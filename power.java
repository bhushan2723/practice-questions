
class power {
    int power(int x,int n)
    {
        if(n==0)
        {
            return 1;
        }
        else if(n==1)
        {
            return x;
        }
        else if(n%2==0)
        {
            int half=power(x, n/2);
            return half*half;
        }
        else{
            return x*power(x, n-1);
        }
    }
    public static void main(String[] args) {
        int n=2,x=2;
        int p=new power().power(x, n);
        System.out.println(p);
    }
}

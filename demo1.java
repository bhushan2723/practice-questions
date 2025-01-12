class student 
{
    String name;
    int roll;
    public void info()
    {
    System.out.println(this.name);
    System.out.println(this.roll);
    }
    student()
    {
        System.out.println("constructor called :");
    }
}
class Main {
    public static void main(String[] args) {
        student s1 = new student();
        s1.name="bhushan";
        s1.roll=21;
        s1.info();
    }
}

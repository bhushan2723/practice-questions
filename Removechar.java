//REMOVE THE SPECIAL CHARACTER OF THE STRING

class Removechar {
    public static void main(String[] args) {
    String input = "D!IW*A@L!I#";
    String clean =" ";
    for(int i=0;i<input.length();i++)
    {
        char ch = input.charAt(i);
        if((ch >='A' && ch <= 'Z') ||
        (ch >='a' && ch<='z') ||
        (ch >='0' && ch <='9') || 
        ch ==' ')
        {
            clean=clean+ch;
        }
    }
    System.out.println(clean);
    }
}

/*
DIWALI
*/

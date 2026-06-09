class Logic
{
    void checkSign(int num)
    { 
        if(num > 0)
        {
            System.out.println("Number is Positive");
        }
        else if(num < 0)
        {
            System.out.println("Number is Negative");
        }
        else
        {
            System.out.println("Its Zero");
        }
    }
}       

class program5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkSign(-8);
        
    }
}

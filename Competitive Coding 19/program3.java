class Logic
{
    void CheckDivisible(int num)
    {
    if((num % 5 == 0) && (num % 11 == 0))
    {
        System.out.println("Its Divisible by 5 and 11");
    }
    else
    {
        System.out.println("Its not Divisible by 5 and 11");
    }
    }
}       

class program3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckDivisible(55);
    }
}

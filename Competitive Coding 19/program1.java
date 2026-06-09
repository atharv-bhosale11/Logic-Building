class Logic
{
    void CheckLeapYear(int year) 
    {
        if((year % 4 == 0) && (year % 100 != 0))
        {
            System.out.println("It's a Leap Year");
        }
        else
        {
            System.out.println("Its not a leap year");
        }
    }
}       

class program1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckLeapYear(2024);
    }
}

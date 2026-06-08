class Logic
{
    void findmax(int a, int b)
    {
       int iMax = 0;

       if(a > b)
       {
        iMax = a;
       }
       else
       {
        iMax = b;
       }
       System.out.println(iMax+ " is greater");
    }
}

class program3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findmax(20,15);
    }
}

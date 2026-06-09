class Logic 
{
    void findmin(int a, int b, int c)
    {
       int iMin = 0;

       if(a < b && a < c)
       {
        iMin = a;
       }
       else if(b < a && b < c )
       {
        iMin = b;
       }
       else
       {
        iMin = c;
       }
       System.out.println(iMin+ " is lesser");
    }
}

class program4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findmin(3,7,2);
    }
}

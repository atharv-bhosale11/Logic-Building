import java.io.*;
import java.util.*;

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter File Name : ");
        String Fname = sobj.nextLine();

        File fobj = new File(Fname);

        if(fobj.exists() && fobj.isFile())
        {
            System.out.println("It is a regular file");
        }
        else
        {
            System.out.println("It is not a regular file");
        }
    }
}

import java.io.*;
import java.util.*;

class program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Directory Name : ");
        String Dname = sobj.nextLine();

        File fobj = new File(Dname);

        if(fobj.exists())
        {
            System.out.println("Directory already exists");
        }
        else
        {
            fobj.mkdir();
            System.out.println("Directory created successfully");
        }
    }
}

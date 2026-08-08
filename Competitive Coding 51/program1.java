import java.io.*;
import java.util.*;

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Directory Name : ");
        String Dname = sobj.nextLine();

        File fobj = new File(Dname);

        if(fobj.exists() && fobj.isDirectory())
        {
            File Arr[] = fobj.listFiles();

            for(int i = 0; i < Arr.length; i++)
            {
                if(Arr[i].isFile())
                {
                    System.out.println(Arr[i].getName());
                }
            }
        }
        else
        {
            System.out.println("Directory not found");
        }
    }
}

import java.io.*;
import java.util.*;

class program5
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

            System.out.println("Files in Directory : ");

            for(int i = 0; i < Arr.length; i++)
            {
                if(Arr[i].isFile())
                {
                    System.out.println(
                        Arr[i].getName() +
                        " -> " +
                        Arr[i].length() +
                        " bytes"
                    );
                }
            }
        }
        else
        {
            System.out.println("Directory not found");
        }
    }
}

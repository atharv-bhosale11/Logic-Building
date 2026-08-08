import java.io.*;
import java.util.*;

class program3
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter File Name : ");
        String Fname = sobj.nextLine();

        File fobj = new File(Fname);

        if(fobj.exists())
        {
            FileInputStream fiobj = new FileInputStream(fobj);

            byte Buffer[] = new byte[1024];
            int iRet = 0;
            long Checksum = 0;

            while((iRet = fiobj.read(Buffer)) != -1)
            {
                for(int i = 0; i < iRet; i++)
                {
                    Checksum = Checksum + Buffer[i];
                }
            }

            System.out.println("Checksum is : " + Checksum);

            fiobj.close();
        }
        else
        {
            System.out.println("File not found");
        }
    }
}

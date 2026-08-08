import java.io.*;
import java.util.*;

class program1
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Source File Name : ");
        String Src = sobj.nextLine();

        System.out.println("Enter Destination File Name : ");
        String Dest = sobj.nextLine();

        File fobjSrc = new File(Src);
        File fobjDest = new File(Dest);

        if(fobjSrc.exists())
        {
            FileInputStream fiobj = new FileInputStream(fobjSrc);
            FileOutputStream foobj = new FileOutputStream(fobjDest);

            byte Buffer[] = new byte[1024];
            int iRet = 0;

            while((iRet = fiobj.read(Buffer)) != -1)
            {
                foobj.write(Buffer,0,iRet);
            }

            System.out.println("Data copied successfully");

            fiobj.close();
            foobj.close();
        }
        else
        {
            System.out.println("Source file not found");
        }
    }
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.Scanner;
public class Main
{
    Scanner sc = new Scanner(System.in);
    double pai = 3.14;
        /* get the option from user */
        // System.out.printf("1. Surface Area of cylinder ");
        // System.out.printf("2. Volumn  Area of Cylinder");
        // System.out.printf("3. Exit\n");

        System.out.println("Enter your choice:");
        int ch = nextInt();
        switch(ch) {
            case 1:
                {
                System.out.printf("Enter the radius & height:");
                double rad = nextDouble();
                double hei = nextHeight();
                double Surface = 2*pai*rad(hei+rad);
                System.out.printf("Surface Area of cylinder:"+ surface);
                break;
                }
            case 2:
                {
                System.out.printf("Enter the radius & height:");
                double rad = nextDouble();
                double hei = nextHeight();
                double volume = pai*rad*2*hei;
                System.out.printf("Surface Area of cylinder:"+ volume);
                break;
                }
            case 3:
                {
                break;
                }
            default:
                System.out.println("You select wrong choice: Thank you");
	}
}
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/**************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

***************************/
import java.util.Scanner;
public class Main
{
    public static void main(String args[])
    {
    Scanner sc = new Scanner(System.in);
    double pai = 3.14;
        /* get the option from user */
        System.out.println("1. Surface Area of cylinder ");
        System.out.println("2. Volumn  Area of Cylinder");
        System.out.println("3. Exit\n");

        System.out.println("Enter your choice:");
        int ch = sc.nextInt();
        switch(ch) 
        {
            case 1:
                {
                System.out.printf("Enter the radius & height:");
                double rad = sc.nextDouble();
                double hei = sc.nextDouble();
                double Surface = 2*pai*rad*(hei+rad);
                System.out.printf("Surface Area of cylinder:"+ Surface);
                break;
                }
            case 2:
                {
                System.out.printf("Enter the radius & height:");
                double rad =sc.nextDouble();
                double hei =sc.nextDouble();
                double volume = pai*rad*rad*hei;
                System.out.printf("Surface Area of cylinder:"+volume);
                break;
                }
            case 3:
                {
                System.out.println("Thank you for exit");
                break;
                }
            default:
                System.out.println("You select wrong choice: Thank you");
        } 
    }    
}
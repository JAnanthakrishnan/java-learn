import java.util.Scanner;
public class input
{
  public static void main(String[] args) {
    Scanner hello = new Scanner(System.in);
    int a;
    System.out.print("Enter the number ");
    a = hello.nextInt();
    System.out.println("The integer you entered is "+a);
  }
}

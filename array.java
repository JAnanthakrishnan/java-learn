import java.util.Scanner;
public class array
{
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int[] a;
    int n;
    System.out.print("Enter the number of items :");
    n = in.nextInt();
    a = new int[n];

    for(int i=0;i<n;i++)
    {
      System.out.print("Enter the memeber a["+i+"] : ");
      a[i]=in.nextInt();
    }

  }
}

import java.util.Scanner;
public class facttrial
{
  public static void main(String[] args) {
    int a;
    long fact=1;
   Scanner in = new Scanner(System.in);
   a=in.nextInt();
   for(int i=a;i>0;i--)
   {
     fact*=i;
   }
   System.out.println(fact);
  }
}

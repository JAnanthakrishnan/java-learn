import java.util.Scanner;
public class calc
{
 public static void main(String[] args)
 {int op;
  double a,b;
  Scanner in = new Scanner(System.in);
  System.out.print("Enter the first number :");
  a=in.nextDouble();
  System.out.print("Enter the second number :");
  b=in.nextDouble();
  System.out.println("1.Addition\n2.Subraction\n3.Multiplication\n4.Division");
  System.out.print("Enter the operation you want :");
  op=in.nextInt();
  switch(op)
  {
    case 1:System.out.println("The answer is "+(a+b));
            break;
    case 2:System.out.println("The answer is "+(a-b));
            break;
    case 3:System.out.println("The answer is "+(a*b));
            break;
    case 4: if(b==0)
            System.out.println("Division by zero is not possible");
            else
            System.out.println("The answer is "+(a/b));
            break;
    default:System.out.println("Select a valid operation");
  }

 }
}

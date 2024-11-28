import java.util.*;

// addition of two number:
class Sum{
    public int addition(int a,int b){
       return a+b;
    }
}
public class Main{
    public static void main(String [] args){
        System.out.println("Hello Duniya:");

        Scanner input= new Scanner(System.in);

        int a = input.nextInt();
        int b = input.nextInt();

        Sum add = new Sum();

        int addi= add.addition(a,b);

        System.out.println("Sum is : " + addi);
    }
}
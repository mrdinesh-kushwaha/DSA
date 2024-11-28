import java.util.*; // in all tne Libraies Include in  this Library

//  class product{
//     public void prod(int a,int b){
        
//         int mul= a*b;
//         System.out.print("Mul is :" +mul+ " ");
//     }
// }
public class Demo{ // this is Main class 

    public static void prod(int a,int b){
        
        int mul= a*b;
        System.out.print("Mul is :" +mul+ " ");
    }

    public static void main(String [] args){
         
        System.out.println("Hello World");
    
        Scanner input= new Scanner(System.in); // for Input taking Input::

        System.out.println("Enter the first number: ");
        int num1= input.nextInt();

        System.out.println("Enter the Second Number: ");
        int num2= input.nextInt();

        // product mul = new product(); // when outside class product create:;
        // mul.prod(num1,num2);

        prod(num1,num2); // inside Main class
    }
}
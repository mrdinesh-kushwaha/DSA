import java.util.Scanner;
public class MiniProject {

    public static void main(String [] args){
        int myNumber= (int)(Math.random()*100);
        int userNumber=0;
        Scanner sc=new Scanner(System.in);
        do{
            System.out.println("Guess the Number between 1 to 100 :");
            userNumber=sc.nextInt();
        
            if(myNumber==userNumber){
                System.out.println("Woohoo!!...YOUR NUMBER IS CORRECT!...");
                break;
            }
            else if(userNumber<myNumber){
                System.out.println("Oops!!...YOUR NUMBER IS TOO SMALL...");
            }
            else{
                System.out.println("Oops!!...YOUR NUMBER IS TOO LARGE...");
            }
        }while(userNumber>=0);

        System.out.println("MY Nmber was: ");
        System.out.println(myNumber);
    }
    
}

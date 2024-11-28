import java.util.*;
public class PrintSumOfNumbers {
    public static void checkpalidrome(String str){
        int i=0;
        int j=str.length()-1;
        while(i<j){
            if(str.charAt(i)!=str.charAt(j)){
                System.out.println("Not Palidrome");
                return ;
            }
            i++;
            j--;
        }
        System.out.println("Palidrome");
    }
    public static void printsum(int a,int b){
        int sum=a+b;
        System.out.println("Sum of two number is :"+sum);
    }


    public static void main(String[] args){
        //printsum(9,78);
        String str="kanak";
        checkpalidrome(str);

    }
    
}

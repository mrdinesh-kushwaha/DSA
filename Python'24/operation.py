first= int(input("Enter the first Num : "))
second= int(input("Enter the second Num : "))
 
operator=input("Enter the operator(+,-,*,/,%) : ")

if operator=='+':
    print("Sum is : " + str(first+second))
elif operator=='-':
    print("substraction is : "  + str(first-second))
elif operator=='*':
    print("Multiplication is : " + str(first*second))
elif operator=='/':
    print("Division is : " + str(first/second))
elif operator=='%':
    print("Modulus is : " + str(first%second))
else :
    print("Invalid operator")

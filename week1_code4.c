// Write a C program to enter two numbers and perform all arithmetic operations using switch case.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    int op;
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);
    printf("Enter your Choice : ");
    scanf("%d",&op);
    switch(op)
    {
    case 1	:
        printf("Sum is : %d",a+b);
        break;
    case 2	:
        printf("Difference is : %d",a-b);
        break;
    case 3	:
        printf("Multiplication is : %d",a*b);
        break;
    case 4	:
        printf("Division is : %d",a/b);
        break;
    default	:
        printf(" Enter the Correct Choice.");
        break;
    }
    return 0;
}
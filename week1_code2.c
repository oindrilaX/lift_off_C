//Write a program that takes a number as input and checks whether it is
//positive, negative or zero.

#include <stdio.h>
#include <conio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n>0)
    {
        printf("it's a positive number\n");
    }
    else if(n<0)
    {
        printf("it's a negative number\n");
    }
    if (n==0)
    {
        printf("it's zero\n");
    }
    
   return 0; 
}
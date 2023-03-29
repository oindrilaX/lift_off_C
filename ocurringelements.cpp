#include<stdio.h>

int occurringElement(int array[], int n) 
{
    int i, j, maxElement, ct;
     int maxct = 0;
    
    for(i = 0; i< n; i++)   
    {
        ct = 1;
        for(j = i+1; j < n; j++)  
        {
            if(array[j] == array[i])
            {
                ct++;     
                if(ct > maxct)
                {
                    maxElement = array[j];
                }
            }
        }
    }
    return maxElement;
}
//Driver Program
int main()
{
    int n;              
    printf("Enter the number of elements ");
    scanf("%d",&n);    
    int array[n];     
    printf("Enter the array elements");
    for(int i=0;i<n;i++)   
    {
        scanf("%d",&array[i]);
    } 
    int maxElement = occurringElement(array, n);   
    printf("\n Maximum Repeating Element : %d",maxElement);    
    return 0;
}

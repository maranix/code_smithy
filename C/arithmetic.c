/*
Task
Read two integers from STDIN and print three lines where:

The first line contains the sum of the two numbers.
The second line contains the difference of the two numbers (first - second).
The third line contains the product of the two numbers.
*/

#include <stdio.h>

int main()
{
    int a=0,b=0;

    printf("Enter an integer a and b: ");
    scanf("%d %d",&a ,&b);

    printf("%d",a+b);
    printf("\n%d",a-b);
    printf("\n%d",a*b);
    return 0;
}
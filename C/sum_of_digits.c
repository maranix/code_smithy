#include <stdio.h>

int main()
{
int n;
printf("Enter a digit: ");
scanf("%d", &n);
int digit, temp, sum = 0;
temp = n;

while(temp > 0)
{
    digit = temp % 10;
    sum = sum + digit;
    temp = temp / 10;
}
printf("Sum: %d", sum);
return 0;
}
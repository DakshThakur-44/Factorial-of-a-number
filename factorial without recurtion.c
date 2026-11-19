//Without recursion

#include <stdio.h>

long long factorial(int n)
{
long long fact = 1;

for(int i = 1; i <= n; i++)
{
    fact = fact * i;
}

return fact;
}

int main()
{
int n;

printf("Enter a number: ");
scanf("%d", &n);

if(n < 0 || n > 20)
{
    printf("Invalid Input");
}
else
{
    printf("Factorial = %lld", factorial(n));
}

return 0;
}

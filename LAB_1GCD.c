#include <stdio.h>
#include <time.h>

int gcd(int n1, int n2) 
{
    if(n2 != 0)
    {
		return gcd(n2, n1 % n2);
	}
    else
    {
        return n1;
	}
}

int main() 
{
    int n1,n2,num;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    num = gcd(n1,n2);
    printf("\nGCD of %d and %d = %d", n1, n2,num);
    return 0;
}

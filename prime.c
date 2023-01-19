#include <stdio.h>

int main()
{
	printf("Enter the number:");
	int n;
	scanf("%d",&n);
	int prime=1;
	for ( int i=1 ; i < n ; i++)
	{
		if (n%i==0)
		{
			prime=0;
		}
	}
	if(prime==1)
		printf("Number is prime");
	else
		printf("Number is not prime");
}
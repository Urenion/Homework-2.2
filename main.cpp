#include <stdio.h>

main() 
{
int a,b;
printf("a=");
scanf("%i",&a);
printf("b=");
scanf("%i",&b);
if(a>b)
{
	printf("More");
}
else
{
		if(a==b)
	{
		printf("equals");
	}
	else
{
	printf("Less");
}
}
}

#include<stdio.h>
main()
{
	int a,b,sum=0;
	scanf("%d",&a);
	while(a!=0)
{

	b=a%10;
	a=a/10;
    sum=sum+b;
}
    printf("%d",sum);
	
	
	
	
	
	}


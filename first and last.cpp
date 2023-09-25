#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d",&a);
   	b=a%10;

	 printf("\n%d",b);
	while(a!=0)
	{
	 c=a;
	 a=a/10;
	 
}
    printf("\n%d",c);
	
}

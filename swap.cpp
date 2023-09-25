#include<stdio.h>
main()
{
	int a,b,s;
	printf("enter first no.");
	scanf("%d",&a);
	printf("enter second no.");
	scanf("%d",&b);
    s=a;
    a=b;
    b=s;
	printf("\nnew no. after swapping is %d",a);
	printf("\nnew no. after swapping is %d",b);
}

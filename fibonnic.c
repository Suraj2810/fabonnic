#include<stdio.h>
void main()
{
	int n;
	int f1=1,f2=1,f3;
	printf("\n how many fibonicci number you want to");
	scanf("%d",&n);
	printf("\n %d\n %d",f1,f2);
	while(n>0)
	{
	f3=f1+f2;
	printf("\n %d",f3);
	f1=f2;
	f2=f3;
	n--;
}
}

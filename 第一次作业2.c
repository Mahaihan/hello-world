#include<stdio.h>
int main()
{
	float a,b,c,deta,x1,x2,d;
	scanf("%f%f%f",&a,&b,&c);
	deta=b*b-4*a*c;
	if(deta<0)
	{
		printf("no root");
	}
	else (deta>=0);
	{
	d=sqrt(deta);
	x1=(-b+d)/(2*a);
	x2=(-b-d)/(2*a);
	printf("%f%f",x1,x2);
	}
	
	return 0;	
 } 

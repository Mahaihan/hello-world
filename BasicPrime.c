
/*素数是只有1和自身是因子的数*/ 
#include<stdio.h> 
int main() {
	int a[256],b,n,c;
	scanf("%d",&n);
	for(b=2;b<=n-1;b++)
	{
		a[b]=n%b;
		
	}
    c=1;
	for(b=2;b<n-1;b++)
	{
    c=c*a[b];
	}
    if(c!=0)
    {
    	printf("%d是素数",n);
	}
	else
	{
		printf("%d不是素数",n);
	}
}

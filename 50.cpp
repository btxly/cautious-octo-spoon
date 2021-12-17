#include<stdio.h>
int main()
{
	int n,a,b,x1,x2,count1,count2;
	scanf("%d\n",&n);
	scanf("%d",&a);
	x1=a;
	while(x1!=0)
	{
		count1+=x1%10;
		x1/=10;
	}
	for(int i=1;i<n;i++)
	{
		scanf("%d",&b);
		x2=b;
		while(x2!=0)
		{
			count2+=x2%10;
			x2/=10;
		}
		if(count1==count2)
		{
			a=b;
		}
		if(count2>count1) a=b;
	}
	printf("%d",a);
	return 0;
 } 

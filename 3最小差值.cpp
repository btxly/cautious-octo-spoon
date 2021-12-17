#include <stdio.h>
int main ()
{
	int m;
	int t = 0;
	int a[1000];
	scanf ("%d",&m);
	int b[1000] = {0};
	for (int i = 0;i < m;i++)
    {
    	scanf ("%d",&a[i]);
	}
	for (int j = 0;j < m-1;j++)
	{
		for (int i = 0;i < m-1-j;i++)
		{
			if (a[i] < a[i+1])
			{
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
		}
	}
	for (int i = 0;i < m-1;i++)
	{
		b[i] = a[i]-a[i+1];
	}
		for (int j = 0;j < m-2;j++)
	{
		for (int i = 0;i < m-2-j;i++)
		{
			if (b[i] > b[i+1])
			{
				t = b[i];
				b[i] = b[i+1];
				b[i+1] = t;
			}
		}
	}
	printf ("%d",b[0]);
	return 0;
}

#include <stdio.h>
int main ()
{
	int a[1000];
	int n;
	int m = 1;
	scanf ("%d",&n);
	for (int i = 0;i < n;i++)
	{
		scanf ("%d",&a[i]);
	}
	for (int i = 0;i < n-1;i++)
	{
		if (a[i] != a[i+1])
		{
			m = m+1;
		}
	}
	printf ("%d",m);
	return 0;
}

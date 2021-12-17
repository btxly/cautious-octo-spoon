#include <stdio.h>
 
int main() 
{
	int n, x, i, s, s1 = 0, temp = 0, d9, d8, d7, d6, d5, d4, d3, d2, d1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) 
	{
		scanf("%d", &x);
		d9 = x / 1 % 10;
		d8 = x / 10 % 10;
		d7 = x / 100 % 10;
		d6 = x / 1000 % 10;
		d5 = x / 10000 % 10;
		d4 = x / 100000 % 10;
		d3 = x / 1000000 % 10;
		d2 = x / 10000000 % 10;
		d1 = x / 100000000 % 10;
		s = d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8 + d9;
		if (s > s1) 
		{
			temp = x;
			s1 = s;
		}
 
		else if (s = s1) 
		{
			if (temp >= x)
				break;
			else if (temp < x) 
			{
				temp = x;
			}
		}
	}
	printf("%d", temp);
	return 0;
}


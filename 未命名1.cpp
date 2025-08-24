#include<stdio.h>
int judge(int n)
{
	if (n % 3 == 0 && n % 7 == 0)
		return 1;
	else
		return 0;
}
int main() 
{
	int n,i,sum=0;
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		if (judge(i))
			sum = sum + i;

	}
	printf("%d", sum);
	return 0;
}

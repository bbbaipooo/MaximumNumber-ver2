#include<stdio.h>
int max(int, int);
int main()
{
	int a, b, c, d;
	printf("Input Number 1 : ");
	scanf_s("%d", &a);
	printf("Input Number 2 : ");
	scanf_s("%d", &b);
	printf("Input Number 3 : ");
	scanf_s("%d", &c);
	printf("Input Number 4 : ");
	scanf_s("%d", &d);
	printf("Maximum Number is %d",max(max(a,b),max(c,d)));
	return 0;
}
int max(int i, int j)
{
	if (i > j)
		return i;
	else
		return j;
}
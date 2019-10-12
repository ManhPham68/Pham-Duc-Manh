#include<stdio.h>
int main()
{
	int n,S=1;
	printf("Nhap N = ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		S*=i;
	}
	printf ("Giai thua S = %d",S);
}

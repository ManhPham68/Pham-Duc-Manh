#include<stdio.h>
int main()
{
	int n;
	printf ("Nhap N = ");
	scanf("%d",&n);
	printf ("Cac so nho hon %d chia het cho 3 la :",n);
	for (int i=1;i<n;i++)
	{
		if (i%3==0)
		printf ("\t%d",i);
	}
}

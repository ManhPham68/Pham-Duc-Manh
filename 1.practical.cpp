#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3;
	printf ("Cac so fibonaci tu 1 den 100 la :");
	for (int i=1;n1+n2<100;i++)
	{
	    n3=n1+n2;
		n1=n2;
		n2=n3;
	   printf ("%d\t",n3);
		
	}
	return 0;
}

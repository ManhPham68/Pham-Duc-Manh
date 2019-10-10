#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,m;
	printf ("\nNhap so thu tu muon tim :");
	scanf ("%d",&m);
	printf ("\n==>So Fibonacci thu %d la :",m);
	for (int i=2;i<=m;i++)
	{
	    n3=n1+n2;
		n1=n2;
		n2=n3;	
	}
	printf ("%d",n3);
	
}

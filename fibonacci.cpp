#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,m;
	printf ("\nNhap so can tim gan nhat vs so fibonacci  :");
	scanf ("%d",&m);
	for (int i=2;n1+n2<=m;i++)
	{
	    n3=n1+n2;
		n1=n2;
		n2=n3;	
 }
	printf ("%d",n3);
	
	
}

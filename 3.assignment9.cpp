#include <stdio.h>
int fibonaci(int n)
{
   int a=0,b=1,c;
   for (int i=2;i<=n;i++)
   {
   	c=a+b;
   	a=b;
   	b=c;
   }
   return c;
   
}
main()
{
	int n;
	printf ("Vi tri so fibonaci muon tim:");
	scanf ("%d",&n);
	printf ("\n==> So can tim la %d",fibonaci(n));
}

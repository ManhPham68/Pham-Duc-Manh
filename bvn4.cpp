#include<stdio.h>
int main()
{
	int n;
	int S=0;
	printf ("Nhap N = ");
	scanf ("%d",&n);
	for (int i=1;i<n;i++)
	if(n%i==0)	S+=i;
	if(S==n) printf ( "So %d la so hoan hoa" ,n);
	else printf ( "So %d khong la so hoan hoa",n);
	
}

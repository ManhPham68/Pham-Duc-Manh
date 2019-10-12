#include<stdio.h>
int main()
{
	int n ,S;
	printf ("Nhap N=");
	scanf ("%d",&n);
	for  (int i=1;i<=n;i+=2)
	{
	 S+=i;
	}
	printf ("Tong cac so le la : %d",S);
}

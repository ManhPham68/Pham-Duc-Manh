#include <stdio.h>
void nhap (int n,int a[])
{
	for (int i=1;i<=n;i++)
	{
		printf ("A[%d]=",i);
		scanf ("%d",&a[i]);
	}
}
void xuat(int n,int a[])
{
	for(int i=1;i<=n;i++)
	{
		printf ("\t%d",a[i]);
	}
}
void insole(int n,int a[])
{
	for(int i=1;i<=n;i++)
	{
		if (a[i]%2==1)
		printf ("\t%d",a[i]);
	}
}
main()
{
	int n;
	printf ("Nhap so phan tu cua mang :");
	scanf ("%d",&n);
	int a[n];
	nhap (n,a);
	printf("\nMang sau khi nhap la :");
	xuat(n,a);
	printf("\nCac so le trong mang vua nhap la :");
	insole(n,a);
}

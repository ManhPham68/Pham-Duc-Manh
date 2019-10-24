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
void search(int x,int n,int a[])
{
	bool tg=false;
	for (int i=1;i<=n;i++)
	{
		if (x==a[i])
		tg=true;
	}
	if (tg==true)	printf ("Tim thay %d o trong mang ",x);
	else printf ("Khong tim thay %d o trong mang ",x);
	
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
	int x;
	printf ("\nNhap gia tri can kiem tra:");
	scanf ("%d",&x);
	search(x,n,a);
}

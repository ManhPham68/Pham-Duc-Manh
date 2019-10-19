#include<stdio.h>
int main()
{
	int n,A[100];
	printf ("Nhap so phan tu cua mang :");
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
		printf ("Arr[%d]=",i);
		scanf ("%d",&A[i]);
		
	}
	printf ("\nMang sau khi nhap la :");
	for (int i=1;i<=n;i++)
	{
		printf  ("\t%d",A[i]);
	}
	int t;
	printf ("\nSo duong nho nhat la :");
	for (int i=1;i<=n;i++)
	{
		if (A[i]>0)
		{
			t=A[i];
			break;
		}
		
	}
	for (int i=1;i<=n;i++)
	{
		if ((A[i]>0) && (A[i]<t))
		{
		t=A[i];
	    }
		
	}
	printf ("%d",t);
}

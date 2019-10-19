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
	printf ("\nSo le cuoi cung cua mang la :");
	for (int i=n;i>=1;i--)
	{
		if (A[i]%2==1)
		{ 
		t=A[i];
		break;
		}
	}
	printf ("%d",t);
}

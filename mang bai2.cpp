#include<stdio.h>
#include<math.h>
int main()
{
	int  n,A[15];
	printf ("Nhap so phan tu cua mang :");
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
		printf ("Arr[%d] =",i);
		scanf("%d",&A[i]);
		
	}
	for (int i=1;i<=n;i++)
	{
		printf ("\t%d",A[i]);
	}
	printf ("\nCac so le trong mang la :");
	for (int i=1;i<=n;i++)
	{
		if(A[i]%2==1)
		printf ("\t%d",A[i]);
	}
}

#include<stdio.h>
int main()
{
	int n,A[100],dem=0,t=0;
	float s=0;
	printf ("Nhap so phan tu cua mang :");
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
		printf ("\nArr[%d] =",i);
		scanf("%d",&A[i]);
		
	}
	printf ("Tb cac so le trong mang la :");
	for (int i=1;i<=n;i++)
	{
		if(A[i]%2!=0)
		{
			dem++;
			t+=A[i];
			
		}
		s=(float)t/dem;
	}
	printf ("%.2f",s);
	
}

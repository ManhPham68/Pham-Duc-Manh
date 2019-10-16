#include<stdio.h>
#include<math.h>
int main()
{ 
	int  n,A[15];
	printf ("\nNhap so phan tu cua mang :");
	scanf ("%d",&n);
	printf("\n Chi nhap cac so le :");
	for (int i=1;i<=n;i++)
	{
		do 
		{
		printf ("\nArr[%d] =",i);
		scanf("%d",&A[i]);
	    }while(A[i]%2==0);
		
	}
	printf ("Mang vua hap la:");
	for (int i=1;i<=n;i++)
	{
		printf ("\t%d",A[i]);
	}
}

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf ("Nhap so phan tu cua mang :");
	scanf ("%d",&n);
	int A[n],x,temp;
	for (int i=1;i<=n;i++)
	{
		printf ("Arr[%d]=",i);
		scanf ("%d",&A[i]);
	}
	printf ("\nMang vua nhap la :");
	for (int i=1;i<=n;i++)
	{
		printf ("\t%d",A[i]);
	}
	printf ("\nMang sau khi sap xep la :");
	for (int i=2;i<=n;i++)
	{
		int j=i-1;
		temp=A[i];
		while ((j>=1) &&( temp<A[j]) )
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=temp;
	}
	for (int i=1;i<=n;i++)
	{
		printf ("\t%d",A[i]);
	}
	printf ("\nNhap gia tri can tim :");
	scanf ("%d",&x);
	bool t=false;
	long low=1;
	long high=n;
	int vitri;
	while (low<=high)
	{
		long mid = low+(high-low)/2;
		if (x>A[mid]) low=mid+1; 
		else if (x<A[mid]) high=mid-1; 
		else if (x==A[mid]) 
		{
			vitri=mid;
			t=true;
			printf ("Tim thay x o vi tri : %d ",vitri);
			break;
			
		 }
	}
	
	if (t==false)
	printf ("Khong co x trong mang");
	if (t==true)
	{
     printf ("\t==>Vi tri gan x nhat la %d  %d",vitri-1,vitri+1);
	}
	
}

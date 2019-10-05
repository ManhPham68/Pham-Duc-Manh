#include<stdio.h>
int main()
{
	int x,y,t;
	printf ("Nhap X = " );
	scanf("%d",&x);
	printf ("Nhap Y = ");
	scanf ("%d",&y);
	t=x;
	x=y;
	y=t;
	printf ("Gia tri X ,Y sau khi doi cho nhau la %d , %d ",x,y);
}

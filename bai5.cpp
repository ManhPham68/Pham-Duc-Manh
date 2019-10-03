#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,t=0;
	printf("Nhap so muon chuyen doi :");
	scanf("%d",&n);
	for (;n>0;)
	{
		m=n%10;
		t=t*10+m;
		n/=10;
		
	}
	printf("So sau khi chuyen doi la: %d",t);
	
}

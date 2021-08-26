#include<stdio.h>
int main()
{
	int a[6],sum;
	scanf("%d",&sum);
	a[0]=sum/100;
	sum=sum-a[0]*100;
	a[1]=sum/50;
	sum=sum-a[1]*50;
	a[2]=sum/20;
	sum=sum-a[2]*20;
	a[3]=sum/10;
	sum=sum-a[3]*10;
	a[4]=sum/5;
	sum=sum-a[4]*5;
	a[5]=sum;
	printf("%d %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4],a[5]);
}

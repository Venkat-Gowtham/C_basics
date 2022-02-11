#include<stdio.h>
int main()
{
	int n,r,rev=0,temp;
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		r=temp%10;
		rev=rev*10+r;
		temp=temp/10;
	}
	
	
		printf("%d",rev);
	
}

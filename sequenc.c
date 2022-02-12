#include<stdio.h>
int main()
{
    long long int a,b,i,c=0,max=0,temp,max_num;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		c=0;
		temp=i;
		while(temp>0)
		{  if(temp==1)
	         {
	     		c++;
				 break;
			 }
    	 else
    	 {
		 
			if(temp%2==0)
			{
				temp=temp/2;
				c++;
			}
			else
			{
				temp=(3*temp)+1;
				c++;
			}
	    }
     	} 
     	if(c>max)
     	{
     		max=c;
     		max_num=i;
		 }
	
	}
	printf("%lld",max_num);
	return 0;
	

}


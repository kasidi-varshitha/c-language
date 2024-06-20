#include<stdio.h>
void main()
{
	int i,n,flag,count;
	scanf("%d",&n);
	i=1;
	count=1;
	flag=0;
	while(count<=n)
	{
		if(i%2==0)
		{
		
		   if(flag==0)
		   
		   {
		    	printf("%d",i);
			    flag=1;
		   }
		   else
		   {
			printf(",%d",i);
		   }
		   count++;
	    }
	    
	
		i++;
	
    }
}

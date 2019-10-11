#include <stdio.h>
int main()
{
	int array[50],i,n,search;
	printf("enter the size of elements in array\n");
	scanf("%d",&n);
	printf("enter the elements in array\n");
	for(i=0;i<n;i++)
	scanf("\n%d",&array[i]);
	
		printf("enter the number for search\n");
		scanf("%d",&search);
			for(i=0;i<n;i++)
			{
				
			if(array[i]==search)
	 		{
	 		
				printf("Number is present");
				break;
			
			}
			}
				if(i==n)
				
					printf("Number is absent");
				
}
		
			

		



		

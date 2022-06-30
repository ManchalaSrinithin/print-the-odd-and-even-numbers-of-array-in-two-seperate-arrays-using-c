#include<stdio.h>
main()
{
	int a[100],e[100],o[100],i,n,j=0,k=0;
	printf("Enter any value:");
	scanf("%d",&n);
	printf("\nEnter %d values :",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			e[j]=a[i];
			j++;
		}
		else
		{
			o[k]=a[i];
			k++;
		}
	}
	printf("the odd values are\n");
 		for(i=0;i<k;i++)
        {
            printf("%d\n",o[i]);
        }
        printf("The elements of Even are \n");
        for(i=0;i<j;i++)
        {
            printf("%d\n",e[i]);
        }
	
 

}